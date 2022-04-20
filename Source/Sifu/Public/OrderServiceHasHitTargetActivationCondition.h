#pragma once
#include "CoreMinimal.h"
#include "OrderServiceActivationConditions.h"
#include "OrderServiceHasHitTargetActivationCondition.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UOrderServiceHasHitTargetActivationCondition : public UOrderServiceActivationConditions {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool m_bMustBeSucessful;
    
public:
    UOrderServiceHasHitTargetActivationCondition();
};

