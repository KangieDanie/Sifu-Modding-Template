#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTTaskNode
#include "BehaviorTree/BTTaskNode.h"
#include "BeingTakendownTask.generated.h"

UCLASS()
class SIFU_API UBeingTakendownTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBeingTakendownTask();
};

