#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTTaskNode
#include "BehaviorTree/BTTaskNode.h"
#include "EOrderType.h"
#include "WaitOrderTask.generated.h"

UCLASS()
class SIFU_API UWaitOrderTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<EOrderType> m_Orders;
    
    UWaitOrderTask();
};

