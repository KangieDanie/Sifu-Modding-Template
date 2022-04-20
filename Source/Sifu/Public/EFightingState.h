#pragma once
#include "CoreMinimal.h"
#include "EFightingState.generated.h"

UENUM(BlueprintType)
enum class EFightingState : uint8 {
    OutOfFight,
    InFight,
    Counter_Hit,
    KnockedDown,
    Dizzy,
    Pushed,
    Avoided,
    StructureBroken,
    Parried,
    Count,
    None,
};

