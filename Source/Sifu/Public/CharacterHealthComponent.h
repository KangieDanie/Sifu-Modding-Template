#pragma once
#include "CoreMinimal.h"
#include "HealthComponent.h"
#include "EDownState.h"
#include "CharacterHealthComponent.generated.h"

class UCharacterHealthComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCharacterHealthComponentOnGhostDamageLost);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCharacterHealthComponentOnDownStateChange, UCharacterHealthComponent*, _healhComponent, EDownState, _state);

UCLASS()
class SIFU_API UCharacterHealthComponent : public UHealthComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool m_bCanRecoverHealth;
    
    UPROPERTY(BlueprintAssignable)
    FCharacterHealthComponentOnGhostDamageLost OnGhostDamageLost;
    
    UPROPERTY(BlueprintAssignable)
    FCharacterHealthComponentOnDownStateChange OnDownStateChange;
    
private:
    UPROPERTY(EditAnywhere)
    float m_fRecoveryRate;
    
    UPROPERTY(EditAnywhere)
    float m_fRecoveryCooldownInit;
    
    UPROPERTY(EditAnywhere)
    float m_fGhostDamageRecoveryRate;
    
    UPROPERTY(Replicated, Transient)
    float m_fGhostDamage;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRepSetIsDown)
    bool m_bIsDown;
    
    UPROPERTY(Replicated, Transient)
    EDownState m_eDownState;
    
    UPROPERTY(Replicated, Transient)
    int64 m_iTimeRespawnNoDown;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanUnspawnCharacter;
    
    UPROPERTY(EditAnywhere)
    float m_RecoveryRateByDangerState[3];
    
    UFUNCTION()
    void OnRepSetIsDown();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_ResetRecoveryCooldownFromValue(const float _fNewCooldownValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetRecoveryCooldown();
    
    UFUNCTION(BlueprintPure)
    float BPF_GetGhostDamage();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UCharacterHealthComponent();
};

