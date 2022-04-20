#pragma once
#include "CoreMinimal.h"
#include "SCMathExpression.h"
#include "SCMathExpressionFloat.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCMathExpressionFloat : public FSCMathExpression {
    GENERATED_BODY()
public:
    FSCMathExpressionFloat(){};
};

