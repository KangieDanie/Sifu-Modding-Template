#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTTaskNode
#include "BehaviorTree/BTTaskNode.h"
#include "DeathDetectionBTTask.generated.h"

UCLASS()
class SIFU_API UDeathDetectionBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UDeathDetectionBTTask();
};

