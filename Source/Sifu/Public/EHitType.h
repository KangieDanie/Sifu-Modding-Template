#pragma once
#include "CoreMinimal.h"
#include "EHitType.generated.h"

UENUM(BlueprintType)
enum class EHitType : uint8 {
    Barehands,
    Weapon_Blunt,
    Weapon_Cut,
    Weapon_Claw,
    None,
};

