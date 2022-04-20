#pragma once
#include "CoreMinimal.h"
#include "ESCPlayerVolumeNoPhysicsState.generated.h"

UENUM()
enum class ESCPlayerVolumeNoPhysicsState {
    Overlapping,
    OverlappingThisVolume,
    FullyInside,
    FullyInsideThisVolume,
    Count,
};

