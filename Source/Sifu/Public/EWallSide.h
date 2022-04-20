#pragma once
#include "CoreMinimal.h"
#include "EWallSide.generated.h"

UENUM()
enum class EWallSide : uint8 {
    Left,
    Right,
    AnyDirection,
};

