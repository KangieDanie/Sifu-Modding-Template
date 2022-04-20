#pragma once
#include "CoreMinimal.h"
#include "AIPhaseTransition.h"
#include "AIPhaseTransitionFocusAttackVictim.generated.h"

class UVitalPointData;

UCLASS(EditInlineNew)
class SIFU_API UAIPhaseTransitionFocusAttackVictim : public UAIPhaseTransition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UVitalPointData* m_VitalPoint;
    
    UAIPhaseTransitionFocusAttackVictim();
};

