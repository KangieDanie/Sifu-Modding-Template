#pragma once
#include "CoreMinimal.h"
#include "ESCMathConditionValueType.h"
#include "ESCMathCondition.h"
#include "SCMathCondition.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCMathCondition {
    GENERATED_BODY()
public:
    UPROPERTY()
    ESCMathConditionValueType m_eValueType;
    
    UPROPERTY()
    int32 m_iComparedValue;
    
    UPROPERTY()
    float m_fComparedValue;
    
    UPROPERTY()
    ESCMathCondition m_eCondition;
    
    FSCMathCondition(){};
};

