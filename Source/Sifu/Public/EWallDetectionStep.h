#pragma once
#include "CoreMinimal.h"
#include "EWallDetectionStep.generated.h"

UENUM()
enum class EWallDetectionStep {
    Inactive,
    WaitingForDepthRaycast1,
    WaitingForDepthRaycast2,
    WaitingForLengthRaycast,
    Done,
};

