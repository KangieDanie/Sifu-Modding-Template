#pragma once
#include "CoreMinimal.h"
#include "BaseTargetEvaluation.h"
#include "EWeightBinaryOperator.h"
#include "TE_WeightEvaluation.generated.h"

class UBaseTargetWeightEvaluation;

UCLASS()
class SIFU_API UTE_WeightEvaluation : public UBaseTargetEvaluation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EWeightBinaryOperator m_eOperator;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UBaseTargetWeightEvaluation*> m_Evaluations;
    
    UTE_WeightEvaluation();
};

