#pragma once
#include "CoreMinimal.h"
#include "EWeaponTicketStatus.generated.h"

UENUM()
enum class EWeaponTicketStatus {
    Dormant,
    NotUsable,
    InCooldown,
    Owned,
    Available,
};

