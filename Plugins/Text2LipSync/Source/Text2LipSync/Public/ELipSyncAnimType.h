#pragma once
#include "CoreMinimal.h"
#include "ELipSyncAnimType.generated.h"

UENUM(BlueprintType)
enum class ELipSyncAnimType : uint8 {
    T_MorphTargets,
    T_AnimCurves,
    T_PoseAsset,
    T_Max,
};

