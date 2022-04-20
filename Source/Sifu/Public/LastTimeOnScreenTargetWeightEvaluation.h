#pragma once
#include "CoreMinimal.h"
#include "BaseTargetWeightEvaluation.h"
//CROSS-MODULE INCLUDE: Engine RuntimeFloatCurve
#include "LastTimeOnScreenTargetWeightEvaluation.generated.h"

UCLASS(EditInlineNew)
class SIFU_API ULastTimeOnScreenTargetWeightEvaluation : public UBaseTargetWeightEvaluation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve m_TimeCurve;
    
public:
    ULastTimeOnScreenTargetWeightEvaluation();
};

