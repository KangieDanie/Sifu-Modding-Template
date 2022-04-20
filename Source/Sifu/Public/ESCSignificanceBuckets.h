#pragma once
#include "CoreMinimal.h"
#include "ESCSignificanceBuckets.generated.h"

UENUM()
enum class ESCSignificanceBuckets : uint8 {
    None,
    High,
    Medium,
    Low,
    Lowest,
    Count,
};

