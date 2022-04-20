#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpectatorPawn.h"
//CROSS-MODULE INCLUDE: Engine SpectatorPawn
#include "SCSpectatorPawnBase.generated.h"


class UCurveFloat;

UCLASS()
class SIFU_API ASCSpectatorPawnBase : public ASpectatorPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_VerticalStrifeSpeedCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fVerticalStrifeSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLookSpeed;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnAnyInputConsumed();
    
public:
    ASCSpectatorPawnBase();
};

