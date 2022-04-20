#pragma once
#include "CoreMinimal.h"
#include "EHitDismissReason.generated.h"

UENUM()
enum class EHitDismissReason : uint8 {
    None,
    Deflect,
    ParryToAction,
    DefenseNotifyState,
    InvulnerabilityOrderService,
    ParryToHitOrderService,
    TakedownOrGrab,
    StructureBrokenOnParry,
    DizzyOnParry,
    FocusValidated,
    Parry,
    Avoid,
    Dodge,
    Traversal,
};

