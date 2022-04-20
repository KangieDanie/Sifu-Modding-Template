#pragma once
#include "CoreMinimal.h"
#include "EMCDominationGaugeAsFlag.generated.h"

UENUM()
enum class EMCDominationGaugeAsFlag {
    None,
    Negative,
    Neutral,
    Positive = 0x4,
};

