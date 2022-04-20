#pragma once
#include "CoreMinimal.h"
#include "EWeaponAction.generated.h"

UENUM()
enum class EWeaponAction {
    Draw,
    Sheathe,
    PickUp,
    Drop,
    Count,
    None,
};

