#pragma once
#include "CoreMinimal.h"
#include "OrderServiceActivationConditions.h"
#include "EConditionGroupOperators.h"
#include "GroupActivationCondition.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UGroupActivationCondition : public UOrderServiceActivationConditions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EConditionGroupOperators m_eOperator;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UOrderServiceActivationConditions*> m_Conditions;
    
    UGroupActivationCondition();
};

