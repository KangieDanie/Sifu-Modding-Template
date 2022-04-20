#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetCondition.h"
#include "EOrderType.h"
#include "OrderTargetCondition.generated.h"

UCLASS()
class SIFU_API UOrderTargetCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EOrderType m_eOrderType;
    
    UPROPERTY(EditAnywhere)
    bool m_bTargetShouldTargetSelf;
    
    UPROPERTY(EditAnywhere)
    EOrderType m_eRequiredTargetOrderType;
    
    UOrderTargetCondition();
};

