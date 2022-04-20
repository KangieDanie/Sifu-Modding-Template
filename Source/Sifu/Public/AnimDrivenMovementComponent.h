#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "AnimDrivenMovementComponent.generated.h"

UCLASS()
class SIFU_API UAnimDrivenMovementComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool m_bUseDisplacement;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDisplacementCoeff;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bUseRotation;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRotationCoeff;
    
public:
    UAnimDrivenMovementComponent();
};

