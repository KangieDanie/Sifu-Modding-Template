#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCCharacterPoseData
#include "SCCharacterPoseData.h"
#include "WGCharacterPoseData.generated.h"

UCLASS()
class SIFU_API UWGCharacterPoseData : public USCCharacterPoseData {
    GENERATED_BODY()
public:
    UWGCharacterPoseData();
};

