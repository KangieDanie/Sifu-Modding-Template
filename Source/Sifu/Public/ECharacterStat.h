#pragma once
#include "CoreMinimal.h"
#include "ECharacterStat.generated.h"

UENUM(BlueprintType)
enum class ECharacterStat : uint8 {
    SpareStatPoints,
    GlobalLevel,
    GlobalXP,
    Age,
    PendantCharges,
    PendantChargesRefill,
    PendantChargesLimit,
    DemoTrials,
    CurrentComboKills,
    MaxComboKills,
    CurrentComboXp,
    MaxComboXp,
    DeathCounter,
    XPMultiplier,
    Score,
    Count,
};

