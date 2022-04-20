#pragma once
#include "CoreMinimal.h"
#include "ComboTransitionCondition.h"
//CROSS-MODULE INCLUDE: SCCore SCMathExpressionFloat
#include "SCMathExpressionFloat.h"
#include "ComboTransitionConditionTargetDistance.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboTransitionConditionTargetDistance : public UComboTransitionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSCMathExpressionFloat m_condition;
    
    UComboTransitionConditionTargetDistance();
};

