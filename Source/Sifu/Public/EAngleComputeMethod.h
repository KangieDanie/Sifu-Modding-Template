#pragma once
#include "CoreMinimal.h"
#include "EAngleComputeMethod.generated.h"

UENUM()
enum class EAngleComputeMethod : uint8 {
    SelfToTargetOnTargetForward,
    SelfToTargetOnSelfForward,
};

