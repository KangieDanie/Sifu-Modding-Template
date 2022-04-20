#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: GameplayAbilities AbilitySystemComponent
#include "AbilitySystemComponent.h"
#include "AbilityDelegateHandler.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagContainer
#include "GameplayTagContainer.h"
#include "SCAbilitySystemComponent.generated.h"

class USkillGameplayEffect;
class UGameplayEffect;
class UGameplayAbility;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FSCAbilitySystemComponentDelegate, UGameplayAbility*, _ability);

UCLASS(EditInlineNew)
class SIFU_API USCAbilitySystemComponent : public UAbilitySystemComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UGameplayEffect>> m_StartEffects;
    
private:
    UPROPERTY(Transient)
    TMap<TSubclassOf<UGameplayAbility>, FAbilityDelegateHandler> m_OrderDelegateHandler;
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_UnlockSkill(TSubclassOf<USkillGameplayEffect> _effect, bool _bForce);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UnlockPermanentSkills(const TMap<TSubclassOf<USkillGameplayEffect>, int32>& _unlockedSkillOccurences);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UnlockAllSkills(const FString& _path);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetShrineEffects();
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveAndSaveGameplayTag(const FGameplayTagContainer& _tag);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnAbilityDeactived_Unbind(TSubclassOf<UGameplayAbility> _abilityClass, FSCAbilitySystemComponentDelegate _delegate);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnAbilityDeactived_Bind(TSubclassOf<UGameplayAbility> _abilityClass, FSCAbilitySystemComponentDelegate _delegate);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnAbilityActived_Unbind(TSubclassOf<UGameplayAbility> _abilityClass, FSCAbilitySystemComponentDelegate _delegate);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnAbilityActived_Bind(TSubclassOf<UGameplayAbility> _abilityClass, FSCAbilitySystemComponentDelegate _delegate);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LockAllSkills();
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsSkillUnlocked(TSubclassOf<USkillGameplayEffect> _effect);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsInStartEffects(TSubclassOf<USkillGameplayEffect> _effect);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsAbilityActive(TSubclassOf<UGameplayAbility> _abilityClass) const;
    
    UFUNCTION(BlueprintPure)
    TArray<TSubclassOf<USkillGameplayEffect>> BPF_GetUnlockedSkills() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_GetNotificationsEnabled() const;
    
    UFUNCTION(BlueprintPure)
    void BPF_GetCooldownRemainingForTag(FGameplayTagContainer _inCooldownTags, float& _fTimeRemaining, float& _fCooldownDuration);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ConsolidateSkill(TSubclassOf<USkillGameplayEffect> _effect);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ClearAndSaveGameplayTag();
    
    UFUNCTION(BlueprintPure)
    bool BPF_CanUnlockSkill(TSubclassOf<USkillGameplayEffect> _effect);
    
    UFUNCTION(BlueprintPure)
    bool BPF_CanConsolidatekSkill(TSubclassOf<USkillGameplayEffect> _effect);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddShrineEffect(TSubclassOf<UGameplayEffect> _effect);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddAndSaveGameplayTag(const FGameplayTagContainer& _tag, bool _bNeedSaveGame);
    
    USCAbilitySystemComponent();
};

