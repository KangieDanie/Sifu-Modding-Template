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
	AkReverbVolume.h:
=============================================================================*/
#pragma once

#include "GameFramework/Volume.h"
#include "AkSurfaceReflectorSetComponent.h"
#include "AkLateReverbComponent.h"
#include "AkRoomComponent.h"
#include "AkSpatialAudioVolume.generated.h"

/*------------------------------------------------------------------------------------
	AAkSpatialAudioVolume
------------------------------------------------------------------------------------*/
UCLASS(ClassGroup = Audiokinetic, BlueprintType, hidecategories = (Advanced, Attachment, Volume))
class AKAUDIO_API AAkSpatialAudioVolume : public AVolume
{
	GENERATED_UCLASS_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SurfaceReflectorSet", meta = (ShowOnlyInnerProperties))
	UAkSurfaceReflectorSetComponent* SurfaceReflectorSet;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "LateReverb", meta = (ShowOnlyInnerProperties))
	UAkLateReverbComponent* LateReverb;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Room", meta = (ShowOnlyInnerProperties))
	UAkRoomComponent* Room;
};
