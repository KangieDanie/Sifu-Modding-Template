#pragma once
#include "CoreMinimal.h"
#include "EComboTransition.generated.h"

UENUM()
enum class EComboTransition : uint8 {
    Light,
    LightHold,
    LightAlt,
    LightFront,
    LightFrontFront,
    LightBackFront,
    Heavy,
    HeavyHold,
    HeavyAlt,
    HeavyFront,
    HeavyFrontFront,
    HeavyBackFront,
    AttackKnockdown,
    AttackKnockdownHold,
    Grab,
    LightRushAttack,
    DodgeAttack,
    LightGuard,
    HeavyGuard,
    Disengage,
    HeavyRushAttack,
    Count,
    None,
};

