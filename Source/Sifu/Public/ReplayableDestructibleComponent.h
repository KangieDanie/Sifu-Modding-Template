#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: ApexDestruction DestructibleComponent
#include "DestructibleComponent.h"
#include "ReplicatedDamageEvent.h"
#include "ReplayableDestructibleComponent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FReplayableDestructibleComponentOnReCreatedPhysicsState);

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UReplayableDestructibleComponent : public UDestructibleComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bCreatePhysicsStateAtStart;
    
    UPROPERTY(BlueprintAssignable)
    FReplayableDestructibleComponentOnReCreatedPhysicsState OnReCreatedPhysicsState;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_fDelayNotifyHitEvent;
    
    UPROPERTY(EditAnywhere, Replicated)
    bool m_bOnFirstDestructionEnableChunksCollision;
    
    UPROPERTY(ReplicatedUsing=OnRep_DamageEvents)
    TArray<FReplicatedDamageEvent> m_DamageEvents;
    
private:
    UPROPERTY(Transient)
    bool m_bCreatePhysicsState;
    
protected:
    UFUNCTION()
    void OnRep_DamageEvents();
    
    UFUNCTION()
    void EnableNotifyHitEvent();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetApexActorEnabled(bool _bValue);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsDamaged() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void BPE_OnPreFirstDamageReceived(float _fBaseDamage, bool _bFullDamage);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UReplayableDestructibleComponent();
};

