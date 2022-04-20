#pragma once
#include "CoreMinimal.h"
#include "ECameraDataModifierTickBehavior.generated.h"

UENUM()
enum class ECameraDataModifierTickBehavior : uint8 {
    FullyBlended,
    TransitionInOrFullyBlended,
    Always,
    Count,
    None,
};

