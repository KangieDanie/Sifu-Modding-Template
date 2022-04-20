#pragma once
#include "CoreMinimal.h"
#include "EComboAttackValidationStates.generated.h"

UENUM()
enum class EComboAttackValidationStates {
    Success,
    WrongEndQuadrant,
    PreviousAttackIsEmpty,
    PreviousAttackHasWrongEndQuadrant,
    CannotBeEmpty,
    AttackLocked,
};

