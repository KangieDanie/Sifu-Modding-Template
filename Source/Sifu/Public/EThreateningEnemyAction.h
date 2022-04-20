#pragma once
#include "CoreMinimal.h"
#include "EThreateningEnemyAction.generated.h"

UENUM()
enum class EThreateningEnemyAction {
    Attack,
    Traversal,
    Rush,
    Flee,
    PickUpWeapon,
    TooClose,
};

