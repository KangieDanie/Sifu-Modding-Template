#pragma once
#include "CoreMinimal.h"
#include "EMessageReason.generated.h"

UENUM()
enum class EMessageReason : uint8 {
    None,
    LeashMaxDistanceReached,
    LevelDesignCollision,
    Count,
    Invalid,
};

