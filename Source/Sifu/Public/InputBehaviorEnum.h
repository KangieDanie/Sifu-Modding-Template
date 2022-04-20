#pragma once
#include "CoreMinimal.h"
#include "InputBehaviorEnum.generated.h"

UENUM(BlueprintType)
enum class InputBehaviorEnum : uint8 {
    JustPressed,
    Pressed,
    PressedShorterThan,
    JustReleased,
    JustReleasedBefore,
    Count,
};

