#pragma once
#include "CoreMinimal.h"
#include "EDirections.generated.h"

UENUM()
enum class EDirections : uint8 {
    Left,
    Right,
    Down,
    Up,
    Count,
    None,
};

