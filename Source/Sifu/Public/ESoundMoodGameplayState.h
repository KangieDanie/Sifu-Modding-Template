#pragma once
#include "CoreMinimal.h"
#include "ESoundMoodGameplayState.generated.h"

UENUM(BlueprintType)
enum class ESoundMoodGameplayState : uint8 {
    Neutral,
    Tension,
    Fight,
    Melee,
    None,
};

