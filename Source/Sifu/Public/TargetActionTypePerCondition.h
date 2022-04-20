#pragma once
#include "CoreMinimal.h"
#include "BaseActorConditionInstance.h"
#include "TargetActionTypeRequest.h"
#include "EActionType.h"
#include "TargetActionTypePerCondition.generated.h"

UCLASS(EditInlineNew)
class UTargetActionTypePerCondition : public UTargetActionTypeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<EActionType, FBaseActorConditionInstance> m_ActionTypePerCondition;
    
    UPROPERTY(EditAnywhere)
    EActionType m_eDefaultValue;
    
    UTargetActionTypePerCondition();
};

