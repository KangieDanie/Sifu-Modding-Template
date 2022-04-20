#pragma once
#include "CoreMinimal.h"
#include "ESCMathConditionExpression.h"
#include "ESCMathConditionValueType.h"
#include "SCMathCondition.h"
#include "SCMathConditionGroup.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCMathConditionGroup {
    GENERATED_BODY()
public:
    UPROPERTY()
    ESCMathConditionValueType m_eValueType;
    
    UPROPERTY()
    int32 m_iDepth;
    
    UPROPERTY()
    ESCMathConditionExpression m_eType;
    
    UPROPERTY()
    TArray<int32> m_SubGroupIndexes;
    
    UPROPERTY()
    TArray<FSCMathCondition> m_Conditions;
    
    FSCMathConditionGroup(){};
};

