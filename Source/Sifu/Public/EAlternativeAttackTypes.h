#pragma once
#include "CoreMinimal.h"
#include "EAlternativeAttackTypes.generated.h"

UENUM()
enum class EAlternativeAttackTypes {
    Stun,
    Knockdown,
    Pushback,
    AerialAvoid,
    GroundedAvoid,
    Count,
    None,
};

