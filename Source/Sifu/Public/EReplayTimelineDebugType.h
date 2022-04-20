#pragma once
#include "CoreMinimal.h"
#include "EReplayTimelineDebugType.generated.h"

UENUM()
enum class EReplayTimelineDebugType : uint8 {
    RealCutKeyPosition,
    Count,
    Invalid,
};

