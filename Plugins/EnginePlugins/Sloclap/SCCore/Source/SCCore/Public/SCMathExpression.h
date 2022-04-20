#pragma once
#include "CoreMinimal.h"
#include "ESCMathConditionValueType.h"
#include "SCMathConditionGroup.h"
#include "SCMathExpression.generated.h"

USTRUCT()
struct SCCORE_API FSCMathExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    ESCMathConditionValueType m_eValueType;
    
    UPROPERTY()
    TArray<FSCMathConditionGroup> m_ConditionGroups;
    
    UPROPERTY()
    int32 m_iMaxDepth;
    
    FSCMathExpression(){};
};

