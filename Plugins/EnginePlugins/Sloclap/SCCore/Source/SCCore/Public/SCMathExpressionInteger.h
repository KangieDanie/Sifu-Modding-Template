#pragma once
#include "CoreMinimal.h"
#include "SCMathExpression.h"
#include "SCMathExpressionInteger.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCMathExpressionInteger : public FSCMathExpression {
    GENERATED_BODY()
public:
    FSCMathExpressionInteger(){};
};

