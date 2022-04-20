#pragma once
#include "CoreMinimal.h"
#include "BaseTargetEvaluation.h"
#include "InputAction.h"
#include "EWeightBinaryOperator.h"
#include "TE_DirectionalWeightEvaluation.generated.h"

class UBaseDirectionalTargetWeightEvaluation;

UCLASS()
class SIFU_API UTE_DirectionalWeightEvaluation : public UBaseTargetEvaluation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    InputAction m_eAction;
    
    UPROPERTY(EditAnywhere)
    bool m_bBlockWhenActionIsInactive;
    
    UPROPERTY(EditAnywhere)
    EWeightBinaryOperator m_eOperator;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UBaseDirectionalTargetWeightEvaluation*> m_Evaluations;
    
    UTE_DirectionalWeightEvaluation();
};

