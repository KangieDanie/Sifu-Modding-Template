#pragma once
#include "CoreMinimal.h"
#include "BaseActorConditionInstance.h"
//CROSS-MODULE INCLUDE: AIModule BTTaskNode
#include "BehaviorTree/BTTaskNode.h"
#include "WaitForActorConditionTask.generated.h"

UCLASS()
class SIFU_API UWaitForActorConditionTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fMaxWaitDuration;
    
    UPROPERTY(EditAnywhere)
    FBaseActorConditionInstance m_condition;
    
    UWaitForActorConditionTask();
};

