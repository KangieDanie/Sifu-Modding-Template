/********************************************************************************
The content of the files in this repository include portions of the AUDIOKINETIC
Wwise Technology released in source code form as part of the SDK package.

Commercial License Usage

Licensees holding valid commercial licenses to the AUDIOKINETIC Wwise Technology
may use these files in accordance with the end user license agreement provided
with the software or, alternatively, in accordance with the terms contained in a
written agreement between you and Audiokinetic Inc.

Copyright (c) 2021 Audiokinetic Inc.
********************************************************************************/


/*=============================================================================
	AkRoomComponent.cpp:
=============================================================================*/

#include "AkRoomComponent.h"
#include "AkAudioDevice.h"
#include "AkLateReverbComponent.h"
#include "Components/BrushComponent.h"
#include "GameFramework/Volume.h"
#include "Model.h"
#include "EngineUtils.h"
#include "AkAudioEvent.h"

/*------------------------------------------------------------------------------------
	UAkRoomComponent
------------------------------------------------------------------------------------*/

UAkRoomComponent::UAkRoomComponent(const class FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	ParentVolume = NULL;

	// Property initialization
	NextLowerPriorityComponent = NULL;
	
	WallOcclusion = 1.0f;

	bEnable = true;
	bWantsInitializeComponent = true;

	AutoPost = false;
}

FName UAkRoomComponent::GetName() const
{
	return ParentVolume->GetFName();
}

bool UAkRoomComponent::HasEffectOnLocation(const FVector& Location) const
{
	// Need to add a small radius, because on the Mac, EncompassesPoint returns false if
	// Location is exactly equal to the Volume's location
	static float RADIUS = 0.01f;
	return RoomIsActive() && ParentVolume->EncompassesPoint(Location, RADIUS);
}

void UAkRoomComponent::PostLoad()
{
	Super::PostLoad();
	InitializeParentVolume();
}

void UAkRoomComponent::InitializeComponent()
{
	Super::InitializeComponent();

	AddSpatialAudioRoom();
}

void UAkRoomComponent::InitializeParentVolume()
{
	ParentVolume = Cast<AVolume>(GetOwner());
	if (!ParentVolume)
	{
		bEnable = false;
		UE_LOG(LogAkAudio, Error, TEXT("UAkRoomComponent requires to be attached to an actor inheriting from AVolume."));
	}
}

void UAkRoomComponent::UninitializeComponent()
{
	Super::UninitializeComponent();
	RemoveSpatialAudioRoom();
}

void UAkRoomComponent::GetRoomParams(AkRoomParams& outParams)
{
	TArray<AAkAcousticPortal*> IntersectingPortals;

	FString nameStr = ParentVolume->GetName();

	FRotator rotation = ParentVolume->GetActorRotation();

	FVector Front = rotation.RotateVector(FVector::RightVector);
	FVector Up = rotation.RotateVector(FVector::UpVector);

	FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
	if (!AkAudioDevice)
		return;

	AkAudioDevice->FVectorToAKVector(Front, outParams.Front);
	AkAudioDevice->FVectorToAKVector(Up, outParams.Up);
	outParams.strName = TCHAR_TO_ANSI(*nameStr); // This will copy the string inside operator=

	outParams.WallOcclusion = WallOcclusion;

	UAkLateReverbComponent* pRvbCmtp = (UAkLateReverbComponent*)ParentVolume->GetComponentByClass(UAkLateReverbComponent::StaticClass());
	if (pRvbCmtp)
	{
		outParams.ReverbAuxBus = pRvbCmtp->GetAuxBusId();
		outParams.ReverbLevel = pRvbCmtp->SendLevel;
	}

	outParams.RoomGameObj_AuxSendLevelToSelf = AuxSendLevel;
	outParams.RoomGameObj_KeepRegistered = AkAudioEvent == NULL && EventName.IsEmpty() ? false : true;
}

void UAkRoomComponent::AddSpatialAudioRoom()
{
	FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
	if (RoomIsActive() && AkAudioDevice)
	{
		AkRoomParams params;
		GetRoomParams(params);
		AkAudioDevice->AddRoom(this, params);
		IsRegisteredWithWwise = true;
	}
}

void UAkRoomComponent::UpdateSpatialAudioRoom()
{
	FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
	if (RoomIsActive() && AkAudioDevice)
	{
		AkRoomParams params;
		GetRoomParams(params);
		AkAudioDevice->UpdateRoom(this, params);
	}
}

void UAkRoomComponent::RemoveSpatialAudioRoom()
{
	FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
	if (RoomIsActive() && AkAudioDevice)
	{
		// stop all sounds posted on the room
		Stop();
		AkAudioDevice->RemoveRoom(this);
		IsRegisteredWithWwise = false;
	}
}

int32 UAkRoomComponent::PostAssociatedAkEvent(int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources)
{
	AkPlayingID playingID = AK_INVALID_PLAYING_ID;

	if (!HasActiveEvents())
		playingID = PostAkEvent(AkAudioEvent, CallbackMask, PostEventCallback, ExternalSources, EventName);

	return playingID;
}

AkPlayingID UAkRoomComponent::PostAkEventByNameWithDelegate(
	const FString& in_EventName,
	int32 CallbackMask,
	const FOnAkPostEventCallback& PostEventCallback,
	const TArray<FAkExternalSourceInfo>& ExternalSources)
{
	AkPlayingID playingID = AK_INVALID_PLAYING_ID;

	auto AudioDevice = FAkAudioDevice::Get();
	if (AudioDevice)
	{
		playingID = AudioDevice->PostEvent(in_EventName, this, PostEventCallback, CallbackMask);
		if (playingID != AK_INVALID_PLAYING_ID)
			bStarted = true;
	}

	return playingID;
}

void UAkRoomComponent::BeginPlay()
{
	Super::BeginPlay();
	if (AutoPost)
	{
		if (!HasActiveEvents())
			PostAssociatedAkEvent(0, FOnAkPostEventCallback(), TArray<FAkExternalSourceInfo>());
	}
}

void UAkRoomComponent::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	if (bStarted)
		Stop();

	Super::EndPlay(EndPlayReason);
}

#if WITH_EDITOR
void UAkRoomComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	InitializeParentVolume();
	
	//Call add again to update the room parameters, if it has already been added.
	if (IsRegisteredWithWwise)
		UpdateSpatialAudioRoom();
}
#endif
