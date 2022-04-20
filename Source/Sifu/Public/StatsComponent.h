#pragma once
#include "CoreMinimal.h"
#include "AttackDataRow.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "ECharacterStat.h"
#include "ECharacterProgressionRewardTypes.h"
#include "EEarnXPInstigator.h"
#include "CharacterProgressionReward.h"
#include "EPendingttackXPType.h"
#include "EWeightCategory.h"
#include "EPendantUpdate.h"
//CROSS-MODULE INCLUDE: Engine EEndPlayReason
#include "FocusPointsGainStruct.h"
#include "DamageInfos.h"
#include "ECharacterProgressionRewardConditions.h"
#include "EStatsWeaponComputingMethod.h"
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
#include "EAttackLearningState.h"
#include "CombatDeckDetails.h"
#include "StatsComponent.generated.h"

class UCharacterProgressionUnlockDB;
class UStatsDB;
class AFightingCharacter;
class AActor;
class UCharacterProgressionDB;
class UBaseWeaponData;
class UEffectData;
class UTexture2D;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStatsComponentOnGlobalXPGain, float, _fXP);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStatsComponentOnAttackDiscovered, const FAttackDataRow&, _attack, AFightingCharacter*, _opponent);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStatsComponentOnStatsChanged);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FStatsComponentOnNotifyProgressionRewardUnlocked, ECharacterProgressionRewardTypes, _eRewardType, const FCharacterProgressionReward&, _reward, UCharacterProgressionUnlockDB*, _unlock);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStatsComponentOnProgressionUpdated);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStatsComponentOnNotifyLevelUp);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FStatsComponentOnStatChanged, ECharacterStat, _type, int32, _previousValue, int32, _currentValue);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStatsComponentOnAttackUnlockProgress, const FAttackDataRow&, _attack, int32, _iAmount);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStatsComponentOnAttackProgressionLost, AFightingCharacter*, _opponent);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FStatsComponentOnAttackPendingProgressionUpdated, AFightingCharacter*, _opponent, FName, _attack, int32, _XP, EPendingttackXPType, _eXPType, bool, _bDiscovered);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStatsComponentOnAttackPendingProgressionValidated, AFightingCharacter*, _opponent);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStatsComponentOnAttackUnlocked, const FAttackDataRow&, _attack);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FStatsComponentOnSpecialAbilityUnlockProgress, int32, _iSpecialAbility, float, _fPrevProgress, float, _fIncrement, bool, _bValidated);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStatsComponentOnResourceAmountChanged, int32, _iNewAmount);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStatsComponent_OnPendantIncremented, EPendantUpdate, _ePendantUpdate, AActor*, _actorGivingCharge);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStatsComponent_OnDeathCounterDecrement, int32, _iCount, AActor*, _actor);

UCLASS(Blueprintable)
class SIFU_API UStatsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FStatsComponentOnGlobalXPGain OnGlobalXPGain;
    
    UPROPERTY(BlueprintAssignable)
    FStatsComponentOnStatsChanged OnStatsChanged;
    
    UPROPERTY(BlueprintAssignable)
    FStatsComponentOnStatChanged OnStatChanged;
    
    UPROPERTY(BlueprintAssignable)
    FStatsComponentOnNotifyLevelUp OnNotifyLevelUp;
    
    UPROPERTY(BlueprintAssignable)
    FStatsComponentOnNotifyProgressionRewardUnlocked OnNotifyProgressionRewardUnlocked;
    
    UPROPERTY(BlueprintAssignable)
    FStatsComponentOnProgressionUpdated OnProgressionUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FStatsComponentOnAttackDiscovered OnAttackDiscovered;
    
    UPROPERTY(BlueprintAssignable)
    FStatsComponentOnAttackUnlockProgress OnAttackUnlockProgress;
    
    UPROPERTY(BlueprintAssignable)
    FStatsComponentOnAttackProgressionLost OnAttackProgressionLost;
    
    UPROPERTY(BlueprintAssignable)
    FStatsComponentOnAttackPendingProgressionUpdated OnAttackPendingProgressionUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FStatsComponentOnAttackPendingProgressionValidated OnAttackPendingProgressionValidated;
    
    UPROPERTY(BlueprintAssignable)
    FStatsComponentOnAttackUnlocked OnAttackUnlocked;
    
    UPROPERTY(BlueprintAssignable)
    FStatsComponentOnSpecialAbilityUnlockProgress OnSpecialAbilityUnlockProgress;
    
    UPROPERTY(BlueprintAssignable)
    FStatsComponentOnResourceAmountChanged OnResourceAmountChanged;
    
protected:
    UPROPERTY(BlueprintAssignable)
    FStatsComponent_OnPendantIncremented m_OnPendantIncremented;
    
    UPROPERTY(BlueprintAssignable)
    FStatsComponent_OnDeathCounterDecrement m_OnDeathCounterDecrement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStatsDB* m_StatsDB;
    
    UPROPERTY(BlueprintReadOnly)
    EWeightCategory m_eWeightCategory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_iMaxAge;
    
private:
    UPROPERTY(EditAnywhere)
    float m_fAIPendingAttackXCancelDelay;
    
    UPROPERTY(EditAnywhere)
    UCharacterProgressionDB* m_CharacterProgressionDB;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<int32> m_agingPerPendantCharge;
    
    UPROPERTY(Transient)
    UBaseWeaponData* m_weaponData;
    
    UPROPERTY(EditAnywhere)
    TArray<FFocusPointsGainStruct> m_FocusPointsGainDefinition;
    
    UFUNCTION()
    void OnStatsChangedCallback();
    
    UFUNCTION()
    void OnPendingAttackXPOpponentEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason);
    
    UFUNCTION()
    void OnPendingAttackXPOpponentAITimeOut(AFightingCharacter* _ai);
    
public:
    UFUNCTION()
    void OnOwnerKilledSomething(AActor* _victim, bool _bIsOnlyAssist, bool _bKillingBlow, AActor* _Instigator, const FDamageInfos& _damage);
    
private:
    UFUNCTION()
    void OnMatchStarted();
    
public:
    UFUNCTION()
    void OnEffectAddedOrRemovedCallback(bool _bAdded, UEffectData* _effectData);
    
    UFUNCTION(BlueprintNativeEvent)
    int32 GetXPBonusOnKill(const AActor* _victim) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateChargeLimit();
    
private:
    UFUNCTION(BlueprintCallable)
    void BPF_UnlockReward(ECharacterProgressionRewardTypes _eReward, bool _bNotify);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_UnlockProgressionRewards(int32 _iPrevLevel, int32 _iNewLevel, TArray<ECharacterProgressionRewardTypes>& _rewards, bool _bNotify, ECharacterProgressionRewardConditions _eLevelType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetStat_Float(ECharacterStat _eStat, float _fValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetStat(ECharacterStat _eStat, int32 _iValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetCharacterAge(int32 _iAge);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetDeathCounter(AActor* _actorGivingCharge);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetCharacterStats();
    
private:
    UFUNCTION(BlueprintCallable)
    void BPF_LockReward(ECharacterProgressionRewardTypes _eReward);
    
public:
    UFUNCTION(BlueprintPure)
    bool BPF_IsProgressionRewardUnlocked(const ECharacterProgressionRewardTypes _eReward) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_IncrementPendantCharge(int32 _iChargesToAdd, AActor* _actorGivingCharge);
    
    UFUNCTION(BlueprintPure)
    float BPF_GetWeightRatio(EStatsWeaponComputingMethod _eStatsComputingMethod, bool _bWithItemEffects) const;
    
    UFUNCTION(BlueprintPure)
    EWeightCategory BPF_GetWeightCategory() const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetTotalPendingAttackXP(AFightingCharacter* _attacker);
    
    UFUNCTION(BlueprintPure)
    float BPF_GetStat_Float(ECharacterStat _eStat) const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetStat(ECharacterStat _eStat) const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetSparePoints() const;
    
    UFUNCTION(BlueprintPure)
    FText BPF_GetRewardNotificationText(ECharacterProgressionRewardTypes _eReward, UCharacterProgressionUnlockDB* _unlock);
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> BPF_GetRewardNotificationIcon(ECharacterProgressionRewardTypes _eReward, UCharacterProgressionUnlockDB* _unlock);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    int32 BPF_GetRequiredXPForLevel(const int32 _iNewWantedLevel) const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetPendingAttackXP(AFightingCharacter* _attacker, const FName& _attackName, EPendingttackXPType _eXPType) const;
    
    UFUNCTION(BlueprintPure)
    void BPF_GetPendingAttacks(AFightingCharacter* _attacker, TArray<FName>& _outAttacks);
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetGlobalXP() const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetGlobalLevel() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetFocusPointsRefillBonus(FSCUserDefinedEnumHandler _focusGainEnum) const;
    
    UFUNCTION(BlueprintPure)
    UCharacterProgressionDB* BPF_GetCharacterProgressionDB();
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetCharacterAge() const;
    
    UFUNCTION(BlueprintPure)
    EAttackLearningState BPF_GetAttackLearningState(const FName& _attackName);
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetAgeIncrement(int32 _iPendantChargeIdx);
    
    UFUNCTION(BlueprintPure)
    void BPF_GenerateDeckDetailsForAttack(FCombatDeckDetails& _deckDetails, FName _attack, bool _bIsMirror, EStatsWeaponComputingMethod _eComputingMethod);
    
    UFUNCTION(BlueprintCallable)
    void BPF_DecrementDeathCounter(int32 _iCount, AActor* _actor);
    
    UFUNCTION(BlueprintPure)
    EWeightCategory BPF_ComputeWeightCategory(EStatsWeaponComputingMethod _eStatsComputingMethod, bool _bWithItemEffects) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float BPF_ComputeDamageOnBlockingSword(float _fAttackDamage, float _fAttackingWeaponWeight, float _fBlockingWeaponWeight, bool _bGuardBroken) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float BPF_ComputeDamageOnAttackingSword(float _fAttackDamage, float _fAttackingWeaponWeight, float _fBlockingWeaponWeight, bool _bGuardBroken, bool _bGuarding, float _fHittedCharNormalDefense, float _fHittedCharSpecialDefense) const;
    
    UFUNCTION(BlueprintNativeEvent)
    float BPF_ComputeDamage(float _fAttackDamage, float _fEquipmentDefense, bool _bSpecialDamage) const;
    
    UFUNCTION(BlueprintCallable)
    bool BPF_CanResetStatPoints();
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddStat_Float(ECharacterStat _eStat, float _fAddedValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddStat(ECharacterStat _eStat, int32 _iAddedValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddPendingAttackXP(AFightingCharacter* _attacker, const FName& _attackName, int32 _iXP, EPendingttackXPType _eXPType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddGlobalXP(EEarnXPInstigator _eXPInstigator, int32 _iXP, bool _bNotify);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddAttackXP(const FName& _attackName, int32 _iXP, bool& _bLearnt);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_WeightCategoryChanged(EWeightCategory _eWeightCategory);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_SparePointsWin(int32 _iNbSparePointsWin);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetXPGain(AActor* _victim, int32 VictimLevel, int32& XPLevel);
    
    UStatsComponent();
};

