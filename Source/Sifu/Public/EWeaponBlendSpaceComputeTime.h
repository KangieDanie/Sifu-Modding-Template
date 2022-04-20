#pragma once
#include "CoreMinimal.h"
#include "EWeaponBlendSpaceComputeTime.generated.h"

UENUM()
enum class EWeaponBlendSpaceComputeTime : uint8 {
    AtOrderStart,
    OnOrderUpdate,
    CustomComputeTime,
    Count,
};

