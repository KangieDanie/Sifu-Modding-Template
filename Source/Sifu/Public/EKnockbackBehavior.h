#pragma once
#include "CoreMinimal.h"
#include "EKnockbackBehavior.generated.h"

UENUM(BlueprintType)
enum class EKnockbackBehavior : uint8 {
    Regular,
    PullTowardInstigator,
    PushOppositeToInstigator,
    Count,
    None,
};

