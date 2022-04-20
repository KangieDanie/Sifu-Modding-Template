#pragma once
#include "CoreMinimal.h"
#include "EBoneCoordinateSpace.generated.h"

UENUM()
enum class EBoneCoordinateSpace {
    Component,
    Actor,
    World,
    BoneSpace,
    WorldForceUpdate,
};

