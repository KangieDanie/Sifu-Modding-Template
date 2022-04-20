#pragma once
#include "CoreMinimal.h"
#include "HitRequest.h"
#include "SCGameplayAbilityActivationInfo.h"
#include "SCGameplayAbility.h"
#include "EALBinaryOperation.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagContainer
#include "GameplayTagContainer.h"
#include "HitBox.h"
#include "InputAction.h"
//CROSS-MODULE INCLUDE: Engine HitResult
#include "ImpactResult.h"
#include "GuardAbility.generated.h"

class AFightingCharacter;

UCLASS()
class SIFU_API UGuardAbility : public USCGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FHitBox m_StructureBrokenHit;
    
    UPROPERTY(EditAnywhere)
    FHitBox m_ParryDizzyHit;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_TakedownTags;
    
    UPROPERTY(EditAnywhere)
    bool m_bEnableNewGuard;
    
    UPROPERTY(EditAnywhere)
    bool m_bEnableDeflectInterruptOnDeflectNonInterrupt;
    
    UPROPERTY(EditAnywhere)
    bool m_bAlwaysShowParry;
    
    UPROPERTY(EditAnywhere)
    EALBinaryOperation m_eForceGuardALBinaryOperation;
    
    UPROPERTY(EditAnywhere)
    int32 m_iForceGuardALBinaryPriority;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_ParryGrabRequiredTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_ParryPickupRequiredTags;
    
    UPROPERTY(EditAnywhere)
    TArray<InputAction> m_HoldToggleResetOnGuardLost;
    
    UFUNCTION(BlueprintPure)
    bool BPF_CanActivateTakedown(AFightingCharacter* _owner) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_CanActivateParryGrab(AFightingCharacter* _owner) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnParryPickup(const FSCGameplayAbilityActivationInfo& _activationInfos, const FHitResult& _hit, const FHitRequest& _request);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnDefense(const FSCGameplayAbilityActivationInfo& _activationInfos, const FHitResult& _hit, const FImpactResult& _Impact, const FHitRequest& _request);
    
    UGuardAbility();
};

