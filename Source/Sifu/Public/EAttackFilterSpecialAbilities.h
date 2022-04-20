#pragma once
#include "CoreMinimal.h"
#include "EAttackFilterSpecialAbilities.generated.h"

UENUM()
enum class EAttackFilterSpecialAbilities {
    None,
    Parry,
    Avoid,
    Absorb,
    GuardBreak,
    Interrupt,
};

