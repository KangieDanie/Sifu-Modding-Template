#pragma once
#include "CoreMinimal.h"
#include "EPelvisComputation.generated.h"

UENUM()
enum class EPelvisComputation {
    AllowAll,
    AllowForcedDirection,
    AnalogOnly,
};

