#pragma once
#include "CoreMinimal.h"
#include "EPushObstacleReaction.generated.h"

UENUM()
enum class EPushObstacleReaction : int32 {
    WallSplash,
    ObstacleDestructionByHitbox,
    Ignore,
    Hit,
};

