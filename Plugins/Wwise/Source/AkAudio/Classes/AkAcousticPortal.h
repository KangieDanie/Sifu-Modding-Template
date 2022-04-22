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
	AkAcousticsPortal.h:
=============================================================================*/
#pragma once

#include "GameFramework/Volume.h"
#include "OcclusionObstructionService/AkPortalOcclusionObstructionService.h"
#include "AkGameplayTypes.h"
#include "AkAcousticPortal.generated.h"

class UAkRoomComponent;
class UAkLateReverbComponent;

UCLASS(ClassGroup = Audiokinetic, hidecategories=(Advanced, Attachment, Volume), BlueprintType)
class AKAUDIO_API AAkAcousticPortal : public AVolume
{
	GENERATED_UCLASS_BODY()

public:
	virtual void PostRegisterAllComponents() override;
	
	virtual void BeginPlay() override;
	virtual void BeginDestroy() override;

	void FindConnectedRooms();

	FVector GetExtent() const;

	UFUNCTION(BlueprintCallable, Category = "Audiokinetic|AkAcousticPortal")
	void OpenPortal();

	UFUNCTION(BlueprintCallable, Category = "Audiokinetic|AkAcousticPortal")
	void ClosePortal();

	UFUNCTION(BlueprintCallable, Category = "Audiokinetic|AkAcousticPortal")
	AkAcousticPortalState GetCurrentState() const;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = AkAcousticPortal)
	AkAcousticPortalState InitialState;

	virtual void TickActor(float DeltaTime, enum ELevelTick TickType, FActorTickFunction& ThisTickFunction) override;

	AkRoomID GetFrontRoom() const { return FrontRoom; }
	AkRoomID GetBackRoom() const { return BackRoom; }

	/** Time interval between obstruction checks (direct line of sight between listener and portal opening). Set to 0 to disable obstruction checks. We recommend disabling it if you want to use full Spatial Audio diffraction. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AkAcousticPortal|Obstruction")
	float ObstructionRefreshInterval;

	/** Collision channel for obstruction checks (between listener and portal opening). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AkAcousticPortal|Obstruction")
	TEnumAsByte<ECollisionChannel> ObstructionCollisionChannel = ECollisionChannel::ECC_Visibility;

	AkPortalID GetPortalID() const { return AkPortalID(this); }

protected:

	template <typename tComponent>
	void FindConnectedComponents(TMap<UWorld*, tComponent*>& HighestPriorityComponentMap, tComponent*& out_pFront, tComponent*& out_pBack) const;

	int CurrentState;

	AkRoomID FrontRoom;
	AkRoomID BackRoom;

	AkPortalOcclusionObstructionService ObstructionService;
};

UCLASS(ClassGroup = Audiokinetic)
class AKAUDIO_API UAkPortalComponent : public USceneComponent
{
	GENERATED_UCLASS_BODY()

public:

};
