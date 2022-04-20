#pragma once
#include "CoreMinimal.h"
#include "EChargeCapEndReason.generated.h"

UENUM()
enum class EChargeCapEndReason : uint8 {
    CapValidated,
    InterruptedOnPurpose,
    Interrupted,
    InterruptedDuringExtraTime,
    Count,
};

