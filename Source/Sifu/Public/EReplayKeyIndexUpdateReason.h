#pragma once
#include "CoreMinimal.h"
#include "EReplayKeyIndexUpdateReason.generated.h"

UENUM()
enum class EReplayKeyIndexUpdateReason : uint8 {
    KeyMoved,
    KeyInserted,
    Count,
    Invalid,
};

