#include "SCAbilitySystemComponent.h"
#include "Templates/SubclassOf.h"

class USkillGameplayEffect;
class UGameplayAbility;
class UGameplayEffect;

void USCAbilitySystemComponent::BPF_UnlockSkill(TSubclassOf<USkillGameplayEffect> _effect, bool _bForce) {
}

void USCAbilitySystemComponent::BPF_UnlockPermanentSkills(const TMap<TSubclassOf<USkillGameplayEffect>, int32>& _unlockedSkillOccurences) {
}

void USCAbilitySystemComponent::BPF_UnlockAllSkills(const FString& _path) {
}

void USCAbilitySystemComponent::BPF_ResetShrineEffects() {
}

void USCAbilitySystemComponent::BPF_RemoveAndSaveGameplayTag(const FGameplayTagContainer& _tag) {
}

void USCAbilitySystemComponent::BPF_OnAbilityDeactived_Unbind(TSubclassOf<UGameplayAbility> _abilityClass, FSCAbilitySystemComponentDelegate _delegate) {
}

void USCAbilitySystemComponent::BPF_OnAbilityDeactived_Bind(TSubclassOf<UGameplayAbility> _abilityClass, FSCAbilitySystemComponentDelegate _delegate) {
}

void USCAbilitySystemComponent::BPF_OnAbilityActived_Unbind(TSubclassOf<UGameplayAbility> _abilityClass, FSCAbilitySystemComponentDelegate _delegate) {
}

void USCAbilitySystemComponent::BPF_OnAbilityActived_Bind(TSubclassOf<UGameplayAbility> _abilityClass, FSCAbilitySystemComponentDelegate _delegate) {
}

void USCAbilitySystemComponent::BPF_LockAllSkills() {
}

bool USCAbilitySystemComponent::BPF_IsSkillUnlocked(TSubclassOf<USkillGameplayEffect> _effect) {
    return false;
}

bool USCAbilitySystemComponent::BPF_IsInStartEffects(TSubclassOf<USkillGameplayEffect> _effect) {
    return false;
}

bool USCAbilitySystemComponent::BPF_IsAbilityActive(TSubclassOf<UGameplayAbility> _abilityClass) const {
    return false;
}

TArray<TSubclassOf<USkillGameplayEffect>> USCAbilitySystemComponent::BPF_GetUnlockedSkills() const {
    return TArray<TSubclassOf<USkillGameplayEffect>>();
}

bool USCAbilitySystemComponent::BPF_GetNotificationsEnabled() const {
    return false;
}

void USCAbilitySystemComponent::BPF_GetCooldownRemainingForTag(FGameplayTagContainer _inCooldownTags, float& _fTimeRemaining, float& _fCooldownDuration) {
}

void USCAbilitySystemComponent::BPF_ConsolidateSkill(TSubclassOf<USkillGameplayEffect> _effect) {
}

void USCAbilitySystemComponent::BPF_ClearAndSaveGameplayTag() {
}

bool USCAbilitySystemComponent::BPF_CanUnlockSkill(TSubclassOf<USkillGameplayEffect> _effect) {
    return false;
}

bool USCAbilitySystemComponent::BPF_CanConsolidatekSkill(TSubclassOf<USkillGameplayEffect> _effect) {
    return false;
}

void USCAbilitySystemComponent::BPF_AddShrineEffect(TSubclassOf<UGameplayEffect> _effect) {
}

void USCAbilitySystemComponent::BPF_AddAndSaveGameplayTag(const FGameplayTagContainer& _tag, bool _bNeedSaveGame) {
}

USCAbilitySystemComponent::USCAbilitySystemComponent() {
}

