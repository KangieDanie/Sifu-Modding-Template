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
	AkSpatialAudioVolume.cpp:
=============================================================================*/

#include "AkSpatialAudioVolume.h"
#include "AkSpatialAudioHelper.h"
#include "AkAudioDevice.h"
#include "AkLateReverbComponent.h"
#include "AkRoomComponent.h"
#include "AkSurfaceReflectorSetComponent.h"
#include "Components/BrushComponent.h"
#include "Model.h"
/*------------------------------------------------------------------------------------
	AAkSpatialAudioVolume
------------------------------------------------------------------------------------*/

AAkSpatialAudioVolume::AAkSpatialAudioVolume(const class FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	// Property initialization
	UBrushComponent* BrushComp = GetBrushComponent();
	if (BrushComp)
	{
		BrushComp->SetGenerateOverlapEvents(false);
		BrushComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
		BrushComp->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
		BrushComp->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	}

	static const FName SurfReflSetName = TEXT("SurfaceReflector");
	SurfaceReflectorSet = ObjectInitializer.CreateDefaultSubobject<UAkSurfaceReflectorSetComponent>(this, SurfReflSetName);
	SurfaceReflectorSet->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	static const FName LateReverbame = TEXT("LateReverb");
	LateReverb = ObjectInitializer.CreateDefaultSubobject<UAkLateReverbComponent>(this, LateReverbame);
	LateReverb->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	static const FName RoomName = TEXT("Room");
	Room = ObjectInitializer.CreateDefaultSubobject<UAkRoomComponent>(this, RoomName);
	Room->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	bColored = true;
	BrushColor = FColor(109, 187, 255, 255);
}

