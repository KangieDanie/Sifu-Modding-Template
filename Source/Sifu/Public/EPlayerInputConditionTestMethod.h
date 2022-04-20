#pragma once
#include "CoreMinimal.h"
#include "EPlayerInputConditionTestMethod.generated.h"

UENUM()
enum class EPlayerInputConditionTestMethod : int32 {
    IsBestActionAvailable,
    InputVectorValueComparedToActorForward,
    IsActionActive,
};

