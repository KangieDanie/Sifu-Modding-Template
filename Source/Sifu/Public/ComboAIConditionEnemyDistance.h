#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
//CROSS-MODULE INCLUDE: SCCore SCMathExpressionFloat
#include "SCMathExpressionFloat.h"
#include "ComboAIConditionEnemyDistance.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboAIConditionEnemyDistance : public UAIComboCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSCMathExpressionFloat m_condition;
    
    UComboAIConditionEnemyDistance();
};

