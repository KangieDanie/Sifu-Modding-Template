#pragma once
#include "CoreMinimal.h"
#include "EBlendSpaceParamComputeType.generated.h"

UENUM()
enum class EBlendSpaceParamComputeType : uint8 {
    DistanceFromTarget,
    Count,
};

