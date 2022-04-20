#pragma once
#include "CoreMinimal.h"
#include "EAIDefendedAttackType.generated.h"

UENUM(BlueprintType)
enum class EAIDefendedAttackType : uint8 {
    ComboAttack,
    Throwable,
    SynchAttack,
    Count,
    None,
};

