#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
//CROSS-MODULE INCLUDE: SCCore SCMathExpressionFloat
#include "SCMathExpressionFloat.h"
#include "ComboAIConditionTimedTargetDistance.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboAIConditionTimedTargetDistance : public UAIComboCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FSCMathExpressionFloat m_condition;
    
    UPROPERTY(EditAnywhere)
    float m_fValidationTime;
    
public:
    UComboAIConditionTimedTargetDistance();
};

