#pragma once
#include "CoreMinimal.h"
#include "ECollisionType.generated.h"

UENUM()
enum class ECollisionType {
    SameTarget,
    NoTarget,
    DifferentTargetSamePrio,
    DifferentTargetDifferentPrio,
};

