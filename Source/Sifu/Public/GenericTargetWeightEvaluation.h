#pragma once
#include "CoreMinimal.h"
#include "EWeightBinaryOperator.h"
#include "BaseTargetWeightEvaluation.h"
#include "GenericTargetWeightEvaluation.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UGenericTargetWeightEvaluation : public UBaseTargetWeightEvaluation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    EWeightBinaryOperator m_eOperator;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UBaseTargetWeightEvaluation*> m_Evaluations;
    
public:
    UGenericTargetWeightEvaluation();
};

