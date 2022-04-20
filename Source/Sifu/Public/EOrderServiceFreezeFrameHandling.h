#pragma once
#include "CoreMinimal.h"
#include "EOrderServiceFreezeFrameHandling.generated.h"

UENUM()
enum class EOrderServiceFreezeFrameHandling : uint8 {
    Freeze,
    IgnoreFreezeFrame,
    TickOnceOnStart,
};

