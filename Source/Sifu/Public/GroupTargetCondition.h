#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetCondition.h"
#include "EConditionGroupOperators.h"
#include "BaseActorTargetConditionInstance.h"
#include "GroupTargetCondition.generated.h"

UCLASS()
class SIFU_API UGroupTargetCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EConditionGroupOperators m_eOperator;
    
    UPROPERTY(EditAnywhere)
    TArray<FBaseActorTargetConditionInstance> m_Conditions;
    
    UGroupTargetCondition();
};

