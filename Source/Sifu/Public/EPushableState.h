#pragma once
#include "CoreMinimal.h"
#include "EPushableState.generated.h"

UENUM()
enum class EPushableState : uint8 {
    Stopped,
    Moving,
    Falling,
    OnRail,
    OnRailFalling,
    Bouncing,
    Destroyed,
    None,
};

