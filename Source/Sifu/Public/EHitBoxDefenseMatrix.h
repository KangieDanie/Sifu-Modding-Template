#pragma once
#include "CoreMinimal.h"
#include "EHitBoxDefenseMatrix.generated.h"

UENUM()
enum class EHitBoxDefenseMatrix {
    None,
    Dodge,
    Deflect,
    Guard = 0x4,
};

