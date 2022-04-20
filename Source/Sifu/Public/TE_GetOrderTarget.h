#pragma once
#include "CoreMinimal.h"
#include "BaseTargetEvaluation.h"
#include "EditableOrderType.h"
#include "TE_GetOrderTarget.generated.h"

UCLASS()
class SIFU_API UTE_GetOrderTarget : public UBaseTargetEvaluation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FEditableOrderType m_OrderType;
    
    UPROPERTY(EditAnywhere)
    bool m_bIncludeChildTypes;
    
    UTE_GetOrderTarget();
};

