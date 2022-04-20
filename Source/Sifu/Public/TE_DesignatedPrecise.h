#pragma once
#include "CoreMinimal.h"
#include "BaseTargetEvaluation.h"
#include "InputAction.h"
#include "TE_DesignatedPrecise.generated.h"

UCLASS(Abstract)
class SIFU_API UTE_DesignatedPrecise : public UBaseTargetEvaluation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    InputAction m_eDirectionAction;
    
    UPROPERTY(EditAnywhere)
    float m_fOnScreenToleranceTimeForDesignated;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseRetrainOnDesignatedToOnScreenTargets;
    
    UTE_DesignatedPrecise();
};

