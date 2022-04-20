#pragma once
#include "CoreMinimal.h"
#include "EThrowableState.generated.h"

UENUM()
enum class EThrowableState : uint8 {
    AtRest,
    AtRestOnBreakable,
    StreamedOut,
    IsBeingSnapped,
    IsBeingSnappedWithCol,
    FlyingFreely,
    FlyingToTarget,
    MissedTarget,
    HasHitFloor,
    HasHitChara,
    HasHitCharaNoBounce,
    FallingOffCluster,
    PickedUp,
    Dropped,
    BrokenWithLastThrowAllowed,
    Destroyed,
    Cinematic,
    None,
};

