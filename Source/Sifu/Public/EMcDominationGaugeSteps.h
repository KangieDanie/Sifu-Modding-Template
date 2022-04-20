#pragma once
#include "CoreMinimal.h"
#include "EMcDominationGaugeSteps.generated.h"

UENUM()
enum class EMcDominationGaugeSteps : uint8 {
    Negative,
    Neutral,
    Positive,
    Count,
    None,
};

