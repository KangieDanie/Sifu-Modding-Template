#pragma once
#include "CoreMinimal.h"
#include "EPendingttackXPType.generated.h"

UENUM()
enum class EPendingttackXPType : uint8 {
    DefenseAttack,
    OffenseAttack,
    Num,
};

