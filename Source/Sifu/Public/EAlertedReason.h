#pragma once
#include "CoreMinimal.h"
#include "EAlertedReason.generated.h"

UENUM()
enum class EAlertedReason : uint8 {
    None,
    HitReceived,
    RunningAway,
    TooClose,
    Detection,
    TimerElapsed,
    CharacterSeenFighting,
    SeenHittedByProjectile,
    DeadBody,
    Script,
    Dialog,
    SeenAttacking,
    SeenPickingUpWeapon,
    SeenRushing,
    SeenPerformingTraversal,
    DialogRepyTimerElapsed,
};

