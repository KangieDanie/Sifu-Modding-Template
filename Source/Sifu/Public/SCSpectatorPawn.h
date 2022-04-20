#pragma once
#include "CoreMinimal.h"
#include "SCSpectatorPawnBase.h"
#include "SCSpectatorPawn.generated.h"

UCLASS()
class SIFU_API ASCSpectatorPawn : public ASCSpectatorPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fSpeedFactorModifier;
    
    UPROPERTY(EditAnywhere)
    float m_fFOVModifier;
    
    ASCSpectatorPawn();
};

