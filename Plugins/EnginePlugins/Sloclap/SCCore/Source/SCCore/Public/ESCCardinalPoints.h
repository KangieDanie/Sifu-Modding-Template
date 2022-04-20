#pragma once
#include "CoreMinimal.h"
#include "ESCCardinalPoints.generated.h"

UENUM(BlueprintType)
enum class ESCCardinalPoints : uint8 {
    North,
    East,
    South,
    West,
    Count,
    None,
};

