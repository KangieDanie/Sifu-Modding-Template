#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTTaskNode
#include "BehaviorTree/BTTaskNode.h"
#include "NotifyAttackFinishedBTTask.generated.h"

UCLASS()
class SIFU_API UNotifyAttackFinishedBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UNotifyAttackFinishedBTTask();
};

