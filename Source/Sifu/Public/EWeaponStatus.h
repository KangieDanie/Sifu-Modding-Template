#pragma once
#include "CoreMinimal.h"
#include "EWeaponStatus.generated.h"

UENUM()
enum class EWeaponStatus {
    Handled,
    Falling,
    Lying,
};

