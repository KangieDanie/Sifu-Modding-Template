#pragma once
#include "CoreMinimal.h"
#include "EKnockbackReorientationBehaviour.generated.h"

UENUM(BlueprintType)
enum class EKnockbackReorientationBehaviour : uint8 {
    ReorientToAttacker,
    ReorientToImpact,
    InvertReorientToImpact,
    ReorientToImpactNormal,
    None,
};

