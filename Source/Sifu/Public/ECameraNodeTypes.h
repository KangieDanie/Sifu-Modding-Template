#pragma once
#include "CoreMinimal.h"
#include "ECameraNodeTypes.generated.h"

UENUM()
enum class ECameraNodeTypes {
    CameraNode,
    CameraNodeBlender,
    CameraMixerNode,
    AnimDrivenCameraNode,
    Count,
};

