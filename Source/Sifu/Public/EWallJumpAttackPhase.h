#pragma once
#include "CoreMinimal.h"
#include "EWallJumpAttackPhase.generated.h"

UENUM()
enum class EWallJumpAttackPhase : uint8 {
    Entry,
    Attack,
    Count,
    None,
};

