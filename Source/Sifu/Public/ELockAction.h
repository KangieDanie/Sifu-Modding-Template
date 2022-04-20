#pragma once
#include "CoreMinimal.h"
#include "ELockAction.generated.h"

UENUM()
enum class ELockAction {
    PreciseLock,
    SwitchTarget,
    LockFromPreviewTargetWhenAttacking,
    LockFromDesignatedTargetWhenAttacking,
    LockFromLandingHit,
    LockFromReceivingHit,
    LockFromPreviousTargetDisappearing,
    AttackDesignatedTarget,
    LockFromBeingAttacked,
    LockCamera,
    Count,
};

