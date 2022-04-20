#pragma once
#include "CoreMinimal.h"
#include "EDefenseTactics.generated.h"

UENUM()
enum class EDefenseTactics : uint8 {
    Invalid,
    Guard,
    Dodge,
    ParryDeflect,
    AttackAsDefense,
    TraversalEvasion,
    Avoid,
    Count,
};

