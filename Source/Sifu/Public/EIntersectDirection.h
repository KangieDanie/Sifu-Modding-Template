#pragma once
#include "CoreMinimal.h"
#include "EIntersectDirection.generated.h"

UENUM()
enum class EIntersectDirection : uint8 {
    Top,
    Bottom,
    Left,
    Right,
    Count,
    None,
};

