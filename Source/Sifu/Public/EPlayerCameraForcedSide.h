#pragma once
#include "CoreMinimal.h"
#include "EPlayerCameraForcedSide.generated.h"

UENUM(BlueprintType)
enum class EPlayerCameraForcedSide : uint8 {
    Left,
    Right,
    None,
};

