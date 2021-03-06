#pragma once
#include "CoreMinimal.h"
#include "EControllerIconAxisTypes.generated.h"

UENUM(BlueprintType)
enum class EControllerIconAxisTypes : uint8 {
    Horizontal,
    Vertical,
    HorizontalAndVertical,
    Diagonal,
    Back,
    Front,
    Left,
    Right,
    Count,
    None,
};

