#pragma once
#include "CoreMinimal.h"
#include "ERagdollMeshOrientation.generated.h"

UENUM()
enum class ERagdollMeshOrientation : int32 {
    FaceUp,
    FaceDown,
    FaceFront,
    FaceBack,
};

