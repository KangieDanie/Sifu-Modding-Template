#pragma once
#include "CoreMinimal.h"
#include "EActionType.generated.h"

UENUM(BlueprintType)
enum class EActionType : uint8 {
    LockMove,
    Takedown,
    NormalAttack,
    Grab,
    Throwable,
    ThrowableFromPickUp,
    Pushable,
    VirtualTarget,
    PushToward,
    FrontFrontLightAttack,
    BackFrontLightAttack,
    FrontLightAttack,
    FrontFrontHeavyAttack,
    BackFrontHeavyAttack,
    FrontHeavyAttack,
    KnockdownAttack,
    Focus,
    PrepFocus,
    PushVictim,
    Avoid,
    LockCamToEnter,
    LockCamToExit,
    RushAttack,
    RunningOrderTarget,
    FocusVitalPoint,
    DodgeAttack,
    PushbackCharacters,
    RushAttackHeavy,
    Count,
    None,
};

