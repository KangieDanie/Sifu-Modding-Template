#pragma once
#include "CoreMinimal.h"
#include "EDeathSequenceEvents.generated.h"

UENUM()
enum class EDeathSequenceEvents : uint8 {
    DisplayMenu,
    Pause,
    HideMenu,
    PlayerStandsUp,
    SnapToDeathPose,
};

