#pragma once
#include "CoreMinimal.h"
#include "EFidgetMirroringTypes.generated.h"

UENUM(BlueprintType)
enum class EFidgetMirroringTypes : uint8 {
    Always,
    FirstFrame,
    FirstFrameAndStopOnMirror,
    Never,
    NeverAndStopOnMirror,
};

