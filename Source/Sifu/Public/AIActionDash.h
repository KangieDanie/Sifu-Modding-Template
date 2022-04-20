#pragma once
#include "CoreMinimal.h"
#include "AIActionAttack.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "WeaponAnimInfo.h"
#include "AIActionDash.generated.h"

UCLASS(Abstract)
class SIFU_API UAIActionDash : public UAIActionAttack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fAttackRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAnimContainer m_animation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FWeaponAnimInfo m_WeaponAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bUseTargetPositionPrediction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fTargetPositionPredictionRatio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bOverrideOrientation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fDirectionAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bSnapOnTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fSnapDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAnimContainer m_AnimationPredash;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FWeaponAnimInfo m_WeaponAnimationPredash;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAnimContainer m_AnimationCharge;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FWeaponAnimInfo m_WeaponAnimationCharge;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fChargeDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAnimContainer m_AnimationPostDash;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FWeaponAnimInfo m_WeaponAnimationPostdash;
    
public:
    UAIActionDash();
};

