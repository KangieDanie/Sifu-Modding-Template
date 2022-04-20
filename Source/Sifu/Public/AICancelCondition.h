#pragma once
#include "CoreMinimal.h"
#include "AIConditionClassInstance.h"
#include "AICancelCondition.generated.h"

USTRUCT(BlueprintType)
struct FAICancelCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fTestFrequency;
    
    UPROPERTY(EditAnywhere)
    FAIConditionClassInstance m_condition;
    
    UPROPERTY(EditAnywhere)
    bool m_bInvert;
    
    SIFU_API FAICancelCondition();
};

