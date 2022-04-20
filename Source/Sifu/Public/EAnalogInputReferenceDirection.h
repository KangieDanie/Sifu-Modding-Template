#pragma once
#include "CoreMinimal.h"
#include "EAnalogInputReferenceDirection.generated.h"

UENUM()
enum class EAnalogInputReferenceDirection : uint8 {
    UpdateWithInputDir,
    UpdateWithInputVelocity,
    UpdateWithActorForward,
    UpdateWithInputForward,
};

