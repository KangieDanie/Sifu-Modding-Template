#pragma once
#include "CoreMinimal.h"
#include "EBoundingBoxSides.generated.h"

UENUM()
enum class EBoundingBoxSides {
    None,
    Left,
    Right,
    Front = 0x4,
    Back = 0x10,
};

