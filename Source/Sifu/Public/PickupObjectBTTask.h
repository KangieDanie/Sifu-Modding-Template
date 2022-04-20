#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTTaskNode
#include "BehaviorTree/BTTaskNode.h"
#include "PickupObjectBTTask.generated.h"

UCLASS()
class SIFU_API UPickupObjectBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPickupObjectBTTask();
};

