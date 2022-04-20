#pragma once
#include "CoreMinimal.h"
#include "EReplayKeyTransition.generated.h"

UENUM(BlueprintType)
enum class EReplayKeyTransition : uint8 {
    Linear,
    EaseOut,
    EaseIn,
    EaseInEaseOut,
    Step,
    Count,
    Invalid,
};

