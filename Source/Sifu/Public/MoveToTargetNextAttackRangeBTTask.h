#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTTask_MoveTo
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "MoveToTargetNextAttackRangeBTTask.generated.h"

UCLASS()
class SIFU_API UMoveToTargetNextAttackRangeBTTask : public UBTTask_MoveTo {
    GENERATED_BODY()
public:
    UMoveToTargetNextAttackRangeBTTask();
};

