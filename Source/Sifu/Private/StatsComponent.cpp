#include "StatsComponent.h"

class AFightingCharacter;
class AActor;
class UEffectData;
class UCharacterProgressionUnlockDB;
class UTexture2D;
class UCharacterProgressionDB;

void UStatsComponent::OnStatsChangedCallback() {
}

void UStatsComponent::OnPendingAttackXPOpponentEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason) {
}

void UStatsComponent::OnPendingAttackXPOpponentAITimeOut(AFightingCharacter* _ai) {
}

void UStatsComponent::OnOwnerKilledSomething(AActor* _victim, bool _bIsOnlyAssist, bool _bKillingBlow, AActor* _Instigator, const FDamageInfos& _damage) {
}

void UStatsComponent::OnMatchStarted() {
}

void UStatsComponent::OnEffectAddedOrRemovedCallback(bool _bAdded, UEffectData* _effectData) {
}

int32 UStatsComponent::GetXPBonusOnKill_Implementation(const AActor* _victim) const {
    return 0;
}

void UStatsComponent::BPF_UpdateChargeLimit() {
}

void UStatsComponent::BPF_UnlockReward(ECharacterProgressionRewardTypes _eReward, bool _bNotify) {
}

void UStatsComponent::BPF_UnlockProgressionRewards(int32 _iPrevLevel, int32 _iNewLevel, TArray<ECharacterProgressionRewardTypes>& _rewards, bool _bNotify, ECharacterProgressionRewardConditions _eLevelType) {
}

void UStatsComponent::BPF_SetStat_Float(ECharacterStat _eStat, float _fValue) {
}

void UStatsComponent::BPF_SetStat(ECharacterStat _eStat, int32 _iValue) {
}

void UStatsComponent::BPF_SetCharacterAge(int32 _iAge) {
}

void UStatsComponent::BPF_ResetDeathCounter(AActor* _actorGivingCharge) {
}

void UStatsComponent::BPF_ResetCharacterStats() {
}

void UStatsComponent::BPF_LockReward(ECharacterProgressionRewardTypes _eReward) {
}

bool UStatsComponent::BPF_IsProgressionRewardUnlocked(const ECharacterProgressionRewardTypes _eReward) const {
    return false;
}

void UStatsComponent::BPF_IncrementPendantCharge(int32 _iChargesToAdd, AActor* _actorGivingCharge) {
}

float UStatsComponent::BPF_GetWeightRatio(EStatsWeaponComputingMethod _eStatsComputingMethod, bool _bWithItemEffects) const {
    return 0.0f;
}

EWeightCategory UStatsComponent::BPF_GetWeightCategory() const {
    return EWeightCategory::Light;
}

int32 UStatsComponent::BPF_GetTotalPendingAttackXP(AFightingCharacter* _attacker) {
    return 0;
}

float UStatsComponent::BPF_GetStat_Float(ECharacterStat _eStat) const {
    return 0.0f;
}

int32 UStatsComponent::BPF_GetStat(ECharacterStat _eStat) const {
    return 0;
}

int32 UStatsComponent::BPF_GetSparePoints() const {
    return 0;
}

FText UStatsComponent::BPF_GetRewardNotificationText(ECharacterProgressionRewardTypes _eReward, UCharacterProgressionUnlockDB* _unlock) {
    return FText::GetEmpty();
}

TSoftObjectPtr<UTexture2D> UStatsComponent::BPF_GetRewardNotificationIcon(ECharacterProgressionRewardTypes _eReward, UCharacterProgressionUnlockDB* _unlock) {
    return NULL;
}

int32 UStatsComponent::BPF_GetRequiredXPForLevel_Implementation(const int32 _iNewWantedLevel) const {
    return 0;
}

int32 UStatsComponent::BPF_GetPendingAttackXP(AFightingCharacter* _attacker, const FName& _attackName, EPendingttackXPType _eXPType) const {
    return 0;
}

void UStatsComponent::BPF_GetPendingAttacks(AFightingCharacter* _attacker, TArray<FName>& _outAttacks) {
}

int32 UStatsComponent::BPF_GetGlobalXP() const {
    return 0;
}

int32 UStatsComponent::BPF_GetGlobalLevel() const {
    return 0;
}

float UStatsComponent::BPF_GetFocusPointsRefillBonus(FSCUserDefinedEnumHandler _focusGainEnum) const {
    return 0.0f;
}

UCharacterProgressionDB* UStatsComponent::BPF_GetCharacterProgressionDB() {
    return NULL;
}

int32 UStatsComponent::BPF_GetCharacterAge() const {
    return 0;
}

EAttackLearningState UStatsComponent::BPF_GetAttackLearningState(const FName& _attackName) {
    return EAttackLearningState::Unknown;
}

int32 UStatsComponent::BPF_GetAgeIncrement(int32 _iPendantChargeIdx) {
    return 0;
}

void UStatsComponent::BPF_GenerateDeckDetailsForAttack(FCombatDeckDetails& _deckDetails, FName _attack, bool _bIsMirror, EStatsWeaponComputingMethod _eComputingMethod) {
}

void UStatsComponent::BPF_DecrementDeathCounter(int32 _iCount, AActor* _actor) {
}

EWeightCategory UStatsComponent::BPF_ComputeWeightCategory(EStatsWeaponComputingMethod _eStatsComputingMethod, bool _bWithItemEffects) const {
    return EWeightCategory::Light;
}

float UStatsComponent::BPF_ComputeDamageOnBlockingSword_Implementation(float _fAttackDamage, float _fAttackingWeaponWeight, float _fBlockingWeaponWeight, bool _bGuardBroken) const {
    return 0.0f;
}

float UStatsComponent::BPF_ComputeDamageOnAttackingSword_Implementation(float _fAttackDamage, float _fAttackingWeaponWeight, float _fBlockingWeaponWeight, bool _bGuardBroken, bool _bGuarding, float _fHittedCharNormalDefense, float _fHittedCharSpecialDefense) const {
    return 0.0f;
}

float UStatsComponent::BPF_ComputeDamage_Implementation(float _fAttackDamage, float _fEquipmentDefense, bool _bSpecialDamage) const {
    return 0.0f;
}

bool UStatsComponent::BPF_CanResetStatPoints() {
    return false;
}

void UStatsComponent::BPF_AddStat_Float(ECharacterStat _eStat, float _fAddedValue) {
}

void UStatsComponent::BPF_AddStat(ECharacterStat _eStat, int32 _iAddedValue) {
}

void UStatsComponent::BPF_AddPendingAttackXP(AFightingCharacter* _attacker, const FName& _attackName, int32 _iXP, EPendingttackXPType _eXPType) {
}

void UStatsComponent::BPF_AddGlobalXP(EEarnXPInstigator _eXPInstigator, int32 _iXP, bool _bNotify) {
}

void UStatsComponent::BPF_AddAttackXP(const FName& _attackName, int32 _iXP, bool& _bLearnt) {
}




UStatsComponent::UStatsComponent() {
    this->m_StatsDB = NULL;
    this->m_eWeightCategory = EWeightCategory::None;
    this->m_iMaxAge = 70;
    this->m_fAIPendingAttackXCancelDelay = 10.00f;
    this->m_CharacterProgressionDB = NULL;
    this->m_weaponData = NULL;
}

