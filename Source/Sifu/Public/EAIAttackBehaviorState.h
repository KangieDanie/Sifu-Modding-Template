#pragma once
#include "CoreMinimal.h"
#include "EAIAttackBehaviorState.generated.h"

UENUM()
enum class EAIAttackBehaviorState {
    None,
    Cancelled,
    MoveToTarget,
    PrepareAttack,
    PrepareAttackAction,
    PrepareAttackFollowup,
    Attacking,
};

