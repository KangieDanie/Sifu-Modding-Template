#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
#include "AIConditionClassInstance.h"
#include "EComboAIConditionGroupOperator.h"
#include "ComboAIConditionGroup.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboAIConditionGroup : public UAIComboCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EComboAIConditionGroupOperator m_eOperator;
    
    UPROPERTY(EditAnywhere)
    bool m_bForceTestAllConditions;
    
    UPROPERTY(EditAnywhere)
    TArray<FAIConditionClassInstance> m_Conditions;
    
    UComboAIConditionGroup();
};

