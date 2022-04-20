#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTTaskNode
#include "BehaviorTree/BTTaskNode.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTag
//#include "GameplayTagContainer.h"
#include "PatrolBTTask.generated.h"

UCLASS()
class SIFU_API UPatrolBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    //UPROPERTY(EditAnywhere)
    //FGameplayTag m_MovingAIActionTag;
    
public:
    UPatrolBTTask();
};

