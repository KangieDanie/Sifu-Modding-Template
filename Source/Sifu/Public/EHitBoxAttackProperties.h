#pragma once
#include "CoreMinimal.h"
#include "EHitBoxAttackProperties.generated.h"

UENUM()
enum class EHitBoxAttackProperties : uint8 {
    KnockDown,
    PushBack,
    Stun,
    Count,
    None,
};

