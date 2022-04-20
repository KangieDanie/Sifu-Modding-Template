#pragma once
#include "CoreMinimal.h"
#include "EReplayCameraMode.generated.h"

UENUM(BlueprintType)
enum class EReplayCameraMode : uint8 {
    Navigation,
    LockedVirtualCam,
    Count,
    Invalid,
};

