#pragma once
#include "CoreMinimal.h"
#include "EWeaponEvent.generated.h"

UENUM()
enum class EWeaponEvent {
    Draw,
    Sheathe,
    PickUp,
    Drop,
    Disarmed,
    Broken,
    Travel,
    Count,
    None,
};

