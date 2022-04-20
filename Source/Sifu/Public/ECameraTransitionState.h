#pragma once
#include "CoreMinimal.h"
#include "ECameraTransitionState.generated.h"

UENUM()
enum class ECameraTransitionState : uint8 {
    None,
    BlendIn,
    FullyBlended,
    BlendOut,
    Count,
};

