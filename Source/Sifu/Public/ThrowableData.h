#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "HitBox.h"
#include "EBounceType.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
#include "EHeight.h"
#include "ThrowableData.generated.h"

class UTargetSettingsDB;
class UCurveFloat;

UCLASS(BlueprintType)
class SIFU_API UThrowableData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iHitByCharaDamage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iHitByObjectDamage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FHitBox m_DefaultHitInfos;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FHitBox m_HitOnMCInfos;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fDistToThrow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fFallingSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fColScaleDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fOnTargetHitSpeedReduction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fMissingSpeedReduc;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fMissedDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bApplyGravityWhenFlyingFreely;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_BounceBackAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFloatRange m_BounceBackRange;
    
    UPROPERTY(EditAnywhere)
    float m_fSoundNoiseRadius;
    
    UPROPERTY(EditAnywhere)
    EHeight m_eTargettedHeight;
    
    UPROPERTY(EditAnywhere)
    EHeight m_eAltTargettedHeight;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseAlternateHeightForFreeThrow;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTargetSettingsDB> m_throwTargetSettingsDB;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fHeightLimitForFootAnimation;
    
    UPROPERTY(EditAnywhere)
    float m_fOffsetDistTrace;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fDistToCheckCollOnPathFreely;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bStayVisibleAfterBeingDestroyed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fThrowFreelyZForceHands;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fThrowFreelyZForceFeet;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fThrowFreelyZForceFeetAlt;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fTargetDistMaxToSwitchToFreely;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* m_SpeedCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fInitialSpeedOnThrow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fProjectileGravityScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fBounciness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fFrictionOnBounce;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EBounceType m_eBounceType;
    
public:
    UThrowableData();
};

