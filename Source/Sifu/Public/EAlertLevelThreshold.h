#pragma once
#include "CoreMinimal.h"
#include "EAlertLevelThreshold.generated.h"

UENUM()
enum class EAlertLevelThreshold : uint8 {
    LowerBoundNoClamp,
    UpperBoundNoClamp,
    LowerBound,
    UpperBound,
};

