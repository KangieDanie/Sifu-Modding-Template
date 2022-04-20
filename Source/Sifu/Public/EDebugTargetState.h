#pragma once
#include "CoreMinimal.h"
#include "EDebugTargetState.generated.h"

UENUM()
enum class EDebugTargetState : uint8 {
    Valid,
    TooClose,
    TooFar,
    NoTarget,
};

