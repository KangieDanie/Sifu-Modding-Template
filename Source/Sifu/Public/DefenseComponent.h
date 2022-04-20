#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: SCCore SCPoolableActorComponent
#include "SCPoolableActorComponent.h"
#include "EOrderType.h"
#include "EGuardType.h"
#include "GuardUpdateStruct.h"
#include "ActionConditions.h"
#include "EFightingState.h"
#include "DefenseGauge.h"
#include "HitDescription.h"
#include "FightingStateElement.h"
#include "DefenseComponent.generated.h"

class UGuardDB;
class UVitalPointDB;
class UParryDB;
class UAvoidDB;
class UCurveFloat;
class UAbsorbDB;
class UAttackPropertiesResistanceDB;
class UFightingMovementComponent;
class UEffectData;
class UHealthComponent;
class AFightingCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDefenseComponentOnGuardGaugeChanged, float, NewValue);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDefenseComponentBPE_GuardChanged, EGuardType, _eGuardType);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDefenseComponentBPE_FightingStateChanged, EFightingState, _eFightingState, bool, _bPush);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDefenseComponentBPE_AvoidWindowOpened);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDefenseComponentBPE_GuardBroken);

UCLASS(BlueprintType)
class SIFU_API UDefenseComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDefenseComponentBPE_GuardChanged BPE_GuardChanged;
    
    UPROPERTY(EditAnywhere)
    TArray<EOrderType> m_UninterruptibleOrderByGuard;
    
    UPROPERTY(BlueprintAssignable)
    FDefenseComponentBPE_FightingStateChanged BPE_FightingStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FDefenseComponentBPE_AvoidWindowOpened BPE_AvoidWindowOpened;
    
    UPROPERTY(EditAnywhere)
    UParryDB* m_ParryDB;
    
    UPROPERTY(EditAnywhere)
    UAvoidDB* m_AvoidDB;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleAnywhere)
    float m_fCurrentGuard;
    
    UPROPERTY(BlueprintAssignable)
    FDefenseComponentBPE_GuardBroken BPE_GuardBroken;
    
    UPROPERTY(BlueprintAssignable)
    FDefenseComponentOnGuardGaugeChanged OnGuardGaugeChanged;
    
private:
    UPROPERTY(EditDefaultsOnly)
    FActionConditions m_CancelConditions;
    
    UPROPERTY(EditDefaultsOnly)
    FActionConditions m_AttackConditions;
    
    UPROPERTY(EditDefaultsOnly)
    FActionConditions m_DodgeConditions;
    
    UPROPERTY(EditDefaultsOnly)
    FActionConditions m_RushConditions;
    
    UPROPERTY(EditDefaultsOnly)
    UGuardDB* m_DefaultGuardDB;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_GuardTargettedStruct)
    FGuardUpdateStruct m_GuardTargettedStruct;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxGuard;
    
    UPROPERTY(EditAnywhere)
    float m_fGrabbableGuardRatio;
    
    UPROPERTY(EditAnywhere)
    float m_fGuardBrokenGaugeCoolDownBeforeRecovery;
    
    UPROPERTY(EditAnywhere)
    float m_fGuardRecoveryRate;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_GuardRecoveryRateByLife;
    
    UPROPERTY(EditAnywhere)
    float m_fGuardBrokenRecoveryRate;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_GuardGaugeRecoveryRateOverWeightRatioCurve;
    
    UPROPERTY(EditAnywhere)
    float m_fGuardRecoveryRateCoeffWhenGuarding;
    
    UPROPERTY(EditAnywhere)
    float m_fGuardBreakDuration;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanDoActionIfGuardGaugeEmpty;
    
    UPROPERTY(EditAnywhere)
    bool m_bGuardBlocksImpactsFromBack;
    
    UPROPERTY(EditAnywhere)
    bool m_bIgnoreRecoveryBlockInGuardBroken;
    
    UPROPERTY(Replicated, Transient)
    EGuardType m_eGuardType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRangeOfDodgeForRefill;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDodgeRefillValue;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDodgeGuardGaugeRefillValue;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBareHandsGuardCoeff;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBareHandsGuardSpecialCoeff;
    
    UPROPERTY(EditAnywhere)
    UAbsorbDB* m_AbsorbDB;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanBeSuperDizzy;
    
    UPROPERTY(EditAnywhere)
    FDefenseGauge m_SuperDizzyGauge;
    
    UPROPERTY(EditAnywhere)
    float m_fSuperDizzyGaugeRatioAfterSuperDizzy;
    
    UPROPERTY(EditAnywhere)
    float m_fGuardGaugeRecoveryCooldown;
    
    UPROPERTY(EditAnywhere, Replicated)
    int32 m_iResilience;
    
    UPROPERTY(EditAnywhere)
    int32 m_iResilienceAttackBonus;
    
    UPROPERTY(EditAnywhere)
    UAttackPropertiesResistanceDB* m_AttackPropertyResistanceDB;
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetGuardValue(float _fGuard);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRepSetGuardGaugeTarget(float _fPercentageTarget, int64 _iTimeToTarget);
    
    UFUNCTION(BlueprintCallable)
    void PopFightingStates();
    
private:
    UFUNCTION()
    void OnRep_GuardTargettedStruct();
    
    UFUNCTION()
    void OnMoveStatusChanged(UFightingMovementComponent* _movementComponent);
    
    UFUNCTION()
    void OnHit(const FHitDescription& _hitDescription);
    
public:
    UFUNCTION()
    void OnEffectAddedOrRemovedCallback(bool _bAdded, UEffectData* _effectData);
    
private:
    UFUNCTION()
    void OnDeath();
    
    UFUNCTION()
    void OnDamage(float _fAmount, UHealthComponent* _healthComponent, bool _bApplied);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void MultiCastSetGuardGaugeTarget(float _fPercentageTarget, int64 _iTimeToTarget);
    
    UFUNCTION(BlueprintPure)
    bool IsParryWindowOpen(bool _bPrediction) const;
    
    UFUNCTION(BlueprintPure)
    bool IsParryActive(bool _bPrediction) const;
    
    UFUNCTION(BlueprintPure)
    bool IsGuarding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAbsorbWindowOpened(bool _bInPrediction) const;
    
    UFUNCTION(BlueprintPure)
    EGuardType GetGuardType() const;
    
    UFUNCTION(Client, Reliable, WithValidation)
    void ClientNotifyIsTargettedByAttack(AFightingCharacter* _attackInstigator, FName _attack);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetPermanentFightingState(EFightingState _ePermanentFightingState);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetGuardType(EGuardType _eGuardType, bool _bInPrediction);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RestoreIncreaseGuardGauge();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetGuardDBToDefault();
    
    UFUNCTION(BlueprintCallable)
    void BPF_PushVitalPointsDbOverride(FName _overrideName, UVitalPointDB* _db);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PushAttackPropertiesResistanceDBOverride(FName _name, UAttackPropertiesResistanceDB* _resistanceDB);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PopVitalPointsDbOverride(FName _overrideName);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PopAttackPropertiesResistanceDBOverride(FName _name);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OverrideGuardDB(UGuardDB* _guardDB);
    
    UFUNCTION(BlueprintCallable)
    void BPF_NotifyVitalPointsChanged();
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsGuardBroken() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsFightingStateActive(EFightingState _eFightingState) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_IncreaseGuardGauge(float _fAmount);
    
    UFUNCTION(BlueprintPure)
    UVitalPointDB* BPF_GetVitalPointsDb() const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetResilienceBonusFromAttack();
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetResilience();
    
    UFUNCTION(BlueprintPure)
    float BPF_GetMaxGuardGauge() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetGuardRatio() const;
    
    UFUNCTION(BlueprintPure)
    UGuardDB* BPF_GetGuardDB() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetGrabbableGuardRatio() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetFightingStateTimeLeft(EFightingState _eFightingState, bool& _bOutActive, bool& _bOutInfinite) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_GetFightingStateInfos(EFightingState _eFightingState, FFightingStateElement& _outInfos) const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetBaseMaxGuard() const;
    
    UFUNCTION(BlueprintPure)
    UAttackPropertiesResistanceDB* BPF_GetAttackPropertiesResistanceDB() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_DecreaseGuardGaugeOverTime(float _fAmount, float _fDelay);
    
    UFUNCTION(BlueprintCallable)
    void BPF_DecreaseGuardGauge(float _fAmount);
    
    UFUNCTION(BlueprintPure)
    uint8 AbsorbStacksLeft(bool _bInPrediction) const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UDefenseComponent();
    
    // Fix for true pure virtual functions not being implemented
};

