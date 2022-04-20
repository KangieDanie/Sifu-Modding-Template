#pragma once
#include "CoreMinimal.h"
#include "EStatsDisplayEnum.generated.h"

UENUM()
enum class EStatsDisplayEnum {
    All,
    FightingStyleOnly,
    CharacterOnly,
    Count,
    None,
};

