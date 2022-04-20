#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTTaskNode
#include "BehaviorTree/BTTaskNode.h"
#include "EFightingActionState.h"
#include "EGlobalBehaviors.h"
#include "RunReactionBTTaskNode.generated.h"

UCLASS()
class SIFU_API URunReactionBTTaskNode : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EGlobalBehaviors m_NextBehavior;
    
    UPROPERTY(EditAnywhere)
    EGlobalBehaviors m_BehaviorToTest;
    
    UPROPERTY(EditAnywhere)
    EFightingActionState m_eActionState;
    
public:
    URunReactionBTTaskNode();
};

