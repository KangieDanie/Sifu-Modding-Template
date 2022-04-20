#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "EffectData.generated.h"

UCLASS()
class SIFU_API UEffectData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fDuration;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bHitInteruptible;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bInfinite;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fStaminaRefillCoeff;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fStaminaActionsCostCoeff;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fStaminaRushCostCoeff;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fStaminaHitOnGuardCostCoeff;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fKnockbackCoeff;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBluntProtectionValueAdded;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCutProtectionValueAdded;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fWeightAdded;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHealthRegenRateAdded;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fInstantHealthRecovery;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fInflictedDamageConversionCoeff;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bHealIsCapped;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fGhostDamageBonus;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackDamageMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDamageReceivedMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBarehandSpecialDamageRatio;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_iResilienceBonus;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fImpactOnWeaponDurabilityMultiplier;
    
    UEffectData();
};

