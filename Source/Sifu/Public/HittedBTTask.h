#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTTaskNode
#include "BehaviorTree/BTTaskNode.h"
#include "HittedBTTask.generated.h"

UCLASS()
class SIFU_API UHittedBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UHittedBTTask();
};

