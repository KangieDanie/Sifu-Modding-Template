#pragma once
#include "CoreMinimal.h"
#include "AIConditionedAction.h"
//CROSS-MODULE INCLUDE: SCCore SCMathExpressionFloat
#include "SCMathExpressionFloat.h"
#include "AILocalizedConditionedAction.generated.h"

USTRUCT()
struct FAILocalizedConditionedAction : public FAIConditionedAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSCMathExpressionFloat m_DistanceTestExpression;
    
    SIFU_API FAILocalizedConditionedAction();
};

