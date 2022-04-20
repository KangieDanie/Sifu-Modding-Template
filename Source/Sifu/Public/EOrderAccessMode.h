#pragma once
#include "CoreMinimal.h"
#include "EOrderAccessMode.generated.h"

UENUM()
enum class EOrderAccessMode : uint8 {
    RunningOnly,
    PendingOnly,
    RunningOrPending,
    RunningOrPendingNoCancelPending,
    Old,
    All,
    PendingOrRunning,
};

