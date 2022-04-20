#pragma once
#include "CoreMinimal.h"
#include "EInterruptionBehavior.generated.h"

UENUM()
enum class EInterruptionBehavior : int32 {
    StopOrderAndRecover,
    SwapOrderAnimation,
    ApplyHitOrRecoverFightingState,
};

