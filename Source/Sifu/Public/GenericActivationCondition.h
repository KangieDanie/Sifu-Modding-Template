#pragma once
#include "CoreMinimal.h"
#include "OrderServiceActivationConditions.h"
#include "EOrderServiceDeactivationMethod.h"
#include "EOrderServiceConditionUpdateFrequency.h"
#include "BaseActorTargetConditionInstance.h"
#include "GenericActivationCondition.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UGenericActivationCondition : public UOrderServiceActivationConditions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EOrderServiceConditionUpdateFrequency m_eUpdateFrequency;
    
    UPROPERTY(EditAnywhere)
    EOrderServiceDeactivationMethod m_eDeactivationMethd;
    
    UPROPERTY(EditAnywhere)
    FBaseActorTargetConditionInstance m_GenericCondition;
    
    UGenericActivationCondition();
};

