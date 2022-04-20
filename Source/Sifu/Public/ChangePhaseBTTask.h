#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTTaskNode
#include "BehaviorTree/BTTaskNode.h"
#include "ChangePhaseBTTask.generated.h"

UCLASS()
class SIFU_API UChangePhaseBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UChangePhaseBTTask();
};

