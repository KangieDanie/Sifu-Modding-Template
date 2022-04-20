#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ProjectileMovementComponent
#include "GameFramework/ProjectileMovementComponent.h"
#include "ThrowableObjMovementComponent.generated.h"

class UCurveFloat;

UCLASS()
class SIFU_API UThrowableObjMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float m_fThrowFreelyZForceHands;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float m_fThrowFreelyZForceFeet;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float m_fThrowFreelyZForceFeetAlt;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    UCurveFloat* m_SpeedCurve;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fFrictionForce;
    
public:
    UThrowableObjMovementComponent();
};

