#pragma once
#include "CoreMinimal.h"
#include "ESCAICombatRoles.generated.h"

UENUM(BlueprintType)
enum class ESCAICombatRoles : uint8 {
    None,
    DirectOpponent,
    IndirectOpponent,
    NonOpponent,
};

