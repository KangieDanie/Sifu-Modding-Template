#pragma once
#include "CoreMinimal.h"
#include "SCGameplayAbility.h"
#include "FocusPrepAbility.generated.h"

UCLASS()
class SIFU_API UFocusPrepAbility : public USCGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fDeactivationDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fMinFocusPointsToActivate;
    
    UFocusPrepAbility();
};

