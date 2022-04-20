#pragma once
#include "CoreMinimal.h"
#include "ECaptureInputStep.generated.h"

UENUM()
enum class ECaptureInputStep : uint8 {
    ActionStep,
    AxisXLeftStep,
    AxisXRightStep,
    AxisYUpStep,
    AxisYDownStep,
    Count,
};

