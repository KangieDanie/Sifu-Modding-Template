#pragma once
#include "CoreMinimal.h"
#include "EDownState.generated.h"

UENUM()
enum class EDownState : uint8 {
    Down,
    StandingUp,
    WaitingForRespawn,
    DownNoRespawn,
    Death,
    DeathWaitingRespawn,
    DeathRespawn,
    DeathNoRespawn,
    Count,
    None,
};

