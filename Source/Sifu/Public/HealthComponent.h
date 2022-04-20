#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: SCCore SCPoolableActorComponent
#include "SCPoolableActorComponent.h"
#include "HealthComponent.generated.h"

class UHealthComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FHealthComponent_OnDamage, float, _fAmount, UHealthComponent*, _healthComponent, bool, _bApplied);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthComponent_OnLifeStockLostDyn, UHealthComponent*, _healhComponent);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthComponent_OnDeathDismissed, UHealthComponent*, _healhComponent);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHealthComponent_OnDeath);

UCLASS(BlueprintType)
class SIFU_API UHealthComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FHealthComponent_OnDamage m_OnDamage;
    
    UPROPERTY(BlueprintAssignable)
    FHealthComponent_OnLifeStockLostDyn m_OnLifeStockLostDyn;
    
    UPROPERTY(BlueprintAssignable)
    FHealthComponent_OnDeathDismissed m_OnDeathDismissed;
    
    UPROPERTY(BlueprintAssignable)
    FHealthComponent_OnDeath m_OnDeath;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleAnywhere)
    float m_fHealth;
    
protected:
    UPROPERTY(EditAnywhere)
    float m_fMaxHealth;
    
    UPROPERTY(EditAnywhere)
    int32 m_iLifeStock;
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerHackSetHealth(float _fHealth);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetCanDieByDamage(bool _bValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetCanBeDamaged(bool _bValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void BPF_ServerSetHealth(float _fHealth);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void BPF_ServerAddHealth(float _fHealth);
    
    UFUNCTION(BlueprintPure)
    float BPF_GetMaxHealth() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetBaseMaxHealth() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ApplyDamage(float _fDamage);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UHealthComponent();
    
    // Fix for true pure virtual functions not being implemented
};

