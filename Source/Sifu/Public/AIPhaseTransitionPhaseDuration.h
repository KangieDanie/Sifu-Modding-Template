#pragma once
#include "CoreMinimal.h"
#include "AIPhaseTransition.h"
#include "AIPhaseTransitionPhaseDuration.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UAIPhaseTransitionPhaseDuration : public UAIPhaseTransition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_fDuration;
    
    UFUNCTION()
    void OnComboFinished();
    
public:
    UAIPhaseTransitionPhaseDuration();
};

