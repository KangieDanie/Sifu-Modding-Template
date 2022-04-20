#pragma once
#include "CoreMinimal.h"
#include "EWeaponOrientationConstraint.generated.h"

UENUM(BlueprintType)
enum class EWeaponOrientationConstraint : uint8 {
    NoConstraint,
    Normal,
    Fakie,
    Count,
};

