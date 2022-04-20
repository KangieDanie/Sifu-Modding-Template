#pragma once
#include "CoreMinimal.h"
#include "ESCRotationWay.generated.h"

UENUM()
enum class ESCRotationWay : uint8 {
    ClockWise,
    CounterClockWise,
    None,
};

