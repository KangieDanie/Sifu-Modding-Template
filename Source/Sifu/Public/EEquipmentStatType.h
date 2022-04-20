#pragma once
#include "CoreMinimal.h"
#include "EEquipmentStatType.generated.h"

UENUM()
enum class EEquipmentStatType {
    VitalityBonus,
    StaminaBonus,
    Weight,
    GuardCoefficient,
    GuardSpecialCoefficient,
    AttackSpecialRatio,
    DefenseBonus,
    SpecialDefenseBonus,
    Count,
    None,
};

