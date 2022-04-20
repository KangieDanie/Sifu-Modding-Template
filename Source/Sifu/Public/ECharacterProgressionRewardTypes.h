#pragma once
#include "CoreMinimal.h"
#include "ECharacterProgressionRewardTypes.generated.h"

UENUM(BlueprintType)
enum class ECharacterProgressionRewardTypes : uint8 {
    Grab,
    Takedown,
    Count,
    None,
};

