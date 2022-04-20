#pragma once
#include "CoreMinimal.h"
#include "EStatsWeaponComputingMethod.generated.h"

UENUM()
enum class EStatsWeaponComputingMethod : uint8 {
    Normal,
    ForceEquippedWeapon,
    PreventWeapon,
};

