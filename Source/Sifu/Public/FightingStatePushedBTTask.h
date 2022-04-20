#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTTaskNode
#include "BehaviorTree/BTTaskNode.h"
#include "FightingStatePushedBTTask.generated.h"

UCLASS()
class SIFU_API UFightingStatePushedBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UFightingStatePushedBTTask();
};

