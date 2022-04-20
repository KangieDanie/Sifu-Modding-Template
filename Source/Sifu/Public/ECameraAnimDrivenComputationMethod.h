#pragma once
#include "CoreMinimal.h"
#include "ECameraAnimDrivenComputationMethod.generated.h"

UENUM()
enum class ECameraAnimDrivenComputationMethod : uint8 {
    ClosestAngle,
    ClosestDistance,
    Random,
    AlwaysFirst,
    Count,
};

