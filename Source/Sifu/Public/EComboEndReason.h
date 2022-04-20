#pragma once
#include "CoreMinimal.h"
#include "EComboEndReason.generated.h"

UENUM()
enum class EComboEndReason {
    Finished,
    TicketOverride,
    ComboStartFailed,
    BehaviorCancelled,
    MoveToTargetFailed,
    RangeBlockedTimeout,
    Defending,
    WeaponBroke,
    WeaponDropped,
    Parried,
    IsStun,
    PunishableAvoided,
    ComboAssetChanged,
    Custom,
};

