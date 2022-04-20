#pragma once
#include "CoreMinimal.h"
#include "ESimpleAxisSide.generated.h"

UENUM()
enum class ESimpleAxisSide : uint8 {
    PositiveAxis,
    NegativeAxis,
    BothSides,
    None,
};

