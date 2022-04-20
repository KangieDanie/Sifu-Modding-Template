#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "EConditionGroupOperators.h"
#include "BaseActorConditionInstance.h"
#include "GroupCondition.generated.h"

UCLASS()
class SIFU_API UGroupCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EConditionGroupOperators m_eOperator;
    
    UPROPERTY(EditAnywhere)
    TArray<FBaseActorConditionInstance> m_Conditions;
    
    UGroupCondition();
};

