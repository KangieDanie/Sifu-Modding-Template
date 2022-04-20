#pragma once
#include "CoreMinimal.h"
#include "ESlopeReaction.generated.h"

UENUM(BlueprintType)
enum class ESlopeReaction : uint8 {
    FallFromPushed,
    FallOnSlope,
    None,
};

