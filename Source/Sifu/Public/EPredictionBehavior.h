#pragma once
#include "CoreMinimal.h"
#include "EPredictionBehavior.generated.h"

UENUM()
enum class EPredictionBehavior : uint8 {
    Current,
    Prediction,
    Both,
    Count,
    None,
};

