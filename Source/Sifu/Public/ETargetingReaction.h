#pragma once
#include "CoreMinimal.h"
#include "ETargetingReaction.generated.h"

UENUM()
enum class ETargetingReaction {
    Guard,
    Deflect,
    Dodge,
    Hit,
    Attack,
    Grab,
    Throwable,
    Count,
};

