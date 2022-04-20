#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "AbsorbDB.generated.h"

class UCurveFloat;
class UAbsorbPropertyDB;

UCLASS()
class SIFU_API UAbsorbDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fDuration;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_fAttackScaleScurve;
    
    UPROPERTY(EditAnywhere)
    float m_fSpecialAbilityDuration;
    
    UPROPERTY(EditAnywhere)
    int32 m_iFrameBuildUp;
    
    UPROPERTY(EditAnywhere)
    int32 m_iFrameRelease;
    
    UPROPERTY(EditAnywhere)
    float m_fSpecialAbilityGuardGaugeCost;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_SpecialAbilityMovementDynamic;
    
    UPROPERTY(EditAnywhere)
    bool m_bSpecialAbilityConsumStamina;
    
    UPROPERTY(EditAnywhere)
    bool m_bSpecialAbilityHasImpactOnGuardGauge;
    
    UPROPERTY(EditAnywhere)
    bool m_bSpecialAbilityOverrideAnimDynamicByCurve;
    
    UPROPERTY(EditAnywhere)
    float m_fSpecialAbilityTrackingDuration;
    
    UPROPERTY(EditAnywhere)
    UAbsorbPropertyDB* m_DefaultAbsorbPropertyDB;
    
    UPROPERTY(EditAnywhere)
    float m_fDamageToRecoryRatio;
    
    UPROPERTY(EditAnywhere)
    float m_fDamageToRecoryRatioOnGuard;
    
    UPROPERTY(EditAnywhere)
    float m_fSpecialAbilityAbsorbSuccessRefillValue;
    
    UPROPERTY(EditAnywhere)
    float m_fSpecialAbilitySuperAbsorbSuccessRefillValue;
    
    UPROPERTY(EditAnywhere)
    uint8 m_uiNormalAbsorbStackNumber;
    
    UPROPERTY(EditAnywhere)
    uint8 m_uiSuperAbsorbStackNumber;
    
    UPROPERTY(EditAnywhere)
    bool m_bGhostDamageActivatedForAttacks;
    
    UPROPERTY(EditAnywhere)
    int32 m_iOrdersAllowedToPushAbsorbSuccessfulLayer;
    
    UPROPERTY(EditAnywhere)
    bool m_bNormalAbsorbIsDeathDodger;
    
    UPROPERTY(EditAnywhere)
    bool m_bSuperAbsorbIsDeathDodger;
    
    UPROPERTY(EditAnywhere)
    int32 m_iSuperAbsorbFreezeframe;
    
    UPROPERTY(EditAnywhere)
    int32 m_iSuperAbsorbOrders;
    
    UAbsorbDB();
};

