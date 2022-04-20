#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetConditionInstance.h"
#include "ConditionOnTargetWeightEvaluation.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FConditionOnTargetWeightEvaluation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBaseActorTargetConditionInstance m_condition;
    
    UPROPERTY(EditAnywhere)
    float m_fBonus;
    
    FConditionOnTargetWeightEvaluation();
};

