#pragma once
#include "CoreMinimal.h"
#include "BaseDirectionalTargetWeightEvaluation.h"
#include "EWeightBinaryOperator.h"
#include "GenericStickTargetWeightEvaluation.generated.h"

class UBaseTargetWeightEvaluation;

UCLASS(EditInlineNew)
class SIFU_API UGenericStickTargetWeightEvaluation : public UBaseDirectionalTargetWeightEvaluation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    EWeightBinaryOperator m_eOperator;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UBaseTargetWeightEvaluation*> m_Evaluations;
    
public:
    UGenericStickTargetWeightEvaluation();
};

