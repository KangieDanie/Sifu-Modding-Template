#pragma once
#include "CoreMinimal.h"
#include "OrderServiceActivationConditions.h"
#include "OrderServiceRagingBullPhaseActivationCondition.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UOrderServiceRagingBullPhaseActivationCondition : public UOrderServiceActivationConditions {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint8 m_uiAllowedPhases;
    
public:
    UOrderServiceRagingBullPhaseActivationCondition();
};

