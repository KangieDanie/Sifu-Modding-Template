#pragma once
#include "CoreMinimal.h"
#include "EAIPositioningOption.generated.h"

UENUM()
enum class EAIPositioningOption : uint8 {
    AllowObstaclesBetweenAgentAndTarget,
    FilterPositionsWithValidPath,
    Count,
};

