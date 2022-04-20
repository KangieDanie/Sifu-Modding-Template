#pragma once
#include "CoreMinimal.h"
#include "EReplayKeyCameraMode.generated.h"

UENUM(BlueprintType)
enum class EReplayKeyCameraMode : uint8 {
    Gameplay,
    Custom,
    Count,
    Invalid,
};

