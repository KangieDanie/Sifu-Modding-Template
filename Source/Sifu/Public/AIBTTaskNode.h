#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCBTTaskNode
#include "SCBTTaskNode.h"
#include "InputAction.h"
#include "BTTaskNodeRelevancyCondition.h"
#include "AIBTTaskNode.generated.h"

UCLASS()
class SIFU_API UAIBTTaskNode : public USCBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FBTTaskNodeRelevancyCondition> m_RelevancyConditions;
    
    UPROPERTY(EditAnywhere)
    InputAction m_eCancelTaskOnAvailableInput;
    
    UPROPERTY(EditAnywhere)
    bool m_bCancelWaitedOrdersOnFinish;
    
public:
    UAIBTTaskNode();
};

