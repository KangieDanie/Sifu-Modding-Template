#pragma once
#include "CoreMinimal.h"
#include "ELocomotionRotationType.generated.h"

UENUM(BlueprintType)
enum class ELocomotionRotationType : uint8 {
    None,
    Delayed,
    Snap,
    Count,
};

