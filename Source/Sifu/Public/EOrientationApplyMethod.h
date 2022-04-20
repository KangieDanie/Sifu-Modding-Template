#pragma once
#include "CoreMinimal.h"
#include "EOrientationApplyMethod.generated.h"

UENUM()
enum class EOrientationApplyMethod : uint8 {
    CharacterAndMovement,
    CharacterOnly,
};

