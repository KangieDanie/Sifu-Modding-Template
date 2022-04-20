#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTTaskNode
#include "BehaviorTree/BTTaskNode.h"
#include "ParriedBTTask.generated.h"

UCLASS()
class SIFU_API UParriedBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UParriedBTTask();
};

