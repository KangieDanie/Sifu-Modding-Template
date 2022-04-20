#pragma once
#include "CoreMinimal.h"
#include "EApplyDamageOnWeaponType.generated.h"

UENUM(BlueprintType)
enum class EApplyDamageOnWeaponType : uint8 {
    Always,
    Never,
    OnFirstHit,
    OnLastHit,
    Count,
};

