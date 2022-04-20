#pragma once
#include "CoreMinimal.h"
#include "EWeaponAnimType.generated.h"

UENUM(BlueprintType)
enum class EWeaponAnimType : uint8 {
    AnimSequence,
    BlendSpace,
    Count,
};

