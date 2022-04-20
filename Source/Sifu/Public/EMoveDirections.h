#pragma once
#include "CoreMinimal.h"
#include "EMoveDirections.generated.h"

UENUM(BlueprintType)
enum class EMoveDirections : uint8 {
    Left,
    Right,
    Backward,
    Forward,
    Count,
    None,
};

