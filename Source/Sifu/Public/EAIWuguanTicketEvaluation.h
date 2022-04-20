#pragma once
#include "CoreMinimal.h"
#include "EAIWuguanTicketEvaluation.generated.h"

UENUM()
enum class EAIWuguanTicketEvaluation : uint8 {
    IsOnScreen,
    FlyDistance,
    PathDistance,
    TimeSinceLastAttack,
    TimeToReachLocation,
    LastTimeOnScreen,
    PreferedCircle,
    PositionPOIRelevance,
    FlyDistance2DToEnemy,
    Count,
    None,
};

