#pragma once
#include "CoreMinimal.h"
#include "StateWeight.h"
#include "FightingCameraWeightComponent.h"
#include "AIFightingCameraWeightComponent.generated.h"

class UCurveFloat;

UCLASS()
class SIFU_API UAIFightingCameraWeightComponent : public UFightingCameraWeightComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_fDamageValidityWindow;
    
    UPROPERTY(EditAnywhere)
    bool m_bIgnoreFriendlyDamage;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_WeightByDamageCurve;
    
    UPROPERTY(EditAnywhere)
    FStateWeight m_ticketStateWeight;
    
public:
    UAIFightingCameraWeightComponent();
};

