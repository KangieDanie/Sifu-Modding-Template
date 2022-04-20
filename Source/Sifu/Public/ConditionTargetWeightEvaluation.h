#pragma once
#include "CoreMinimal.h"
#include "EWeightBinaryOperator.h"
#include "BaseTargetWeightEvaluation.h"
#include "ConditionOnTargetWeightEvaluation.h"
#include "ConditionTargetWeightEvaluation.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UConditionTargetWeightEvaluation : public UBaseTargetWeightEvaluation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    EWeightBinaryOperator m_eOperator;
    
    UPROPERTY(EditAnywhere)
    TArray<FConditionOnTargetWeightEvaluation> m_BonusPerCondition;
    
    UFUNCTION()
    static FString GetEditorDesc(const FConditionOnTargetWeightEvaluation& _eval);
    
public:
    UConditionTargetWeightEvaluation();
};

