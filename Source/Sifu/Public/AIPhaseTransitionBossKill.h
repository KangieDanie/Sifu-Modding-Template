#pragma once
#include "CoreMinimal.h"
#include "AIPhaseTransition.h"
#include "AIPhaseTransitionBossKill.generated.h"

class UAIFightingComponent;

UCLASS(EditInlineNew)
class SIFU_API UAIPhaseTransitionBossKill : public UAIPhaseTransition {
    GENERATED_BODY()
public:
protected:
    UFUNCTION()
    void OnKillSpare(UAIFightingComponent* _aiComponent);
    
public:
    UAIPhaseTransitionBossKill();
};

