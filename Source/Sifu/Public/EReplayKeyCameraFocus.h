#pragma once
#include "CoreMinimal.h"
#include "EReplayKeyCameraFocus.generated.h"

UENUM(BlueprintType)
enum class EReplayKeyCameraFocus : uint8 {
    None,
    Manual,
    Target,
    Count,
    Invalid,
};

