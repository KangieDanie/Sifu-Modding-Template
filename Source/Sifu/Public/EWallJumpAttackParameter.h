#pragma once
#include "CoreMinimal.h"
#include "EWallJumpAttackParameter.generated.h"

UENUM()
enum class EWallJumpAttackParameter : uint8 {
    ValidAngleMin,
    ValidAngleMax,
    DistToWallJumpPointMin,
    DistToWallJumpPointMax,
    Count,
    None,
};

