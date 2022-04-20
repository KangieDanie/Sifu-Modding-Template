#pragma once
#include "CoreMinimal.h"
#include "ETransitionRotationDirection.generated.h"

UENUM()
enum class ETransitionRotationDirection : uint8 {
    Left,
    Right,
    All,
    Count,
    None,
};

