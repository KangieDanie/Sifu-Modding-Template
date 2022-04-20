#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTTaskNode
#include "BehaviorTree/BTTaskNode.h"
#include "AIPhaseNodeSoftLink.h"
#include "GotoPhaseBTTask.generated.h"

UCLASS()
class SIFU_API UGotoPhaseBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIPhaseNodeSoftLink m_phaseSoftLink;
    
    UGotoPhaseBTTask();
};

