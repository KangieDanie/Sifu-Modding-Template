#pragma once
#include "CoreMinimal.h"
#include "EReplayKeyCutType.generated.h"

UENUM(BlueprintType)
enum class EReplayKeyCutType : uint8 {
    None,
    In,
    Out,
    Count,
    Invalid,
};

