#include "WGAiAction.h"

class UOrderParams;
class AFightingCharacter;
class UAIFightingComponent;
class AFightingPlayerController;
class AFightingAIController;
class USCCrowdFollowingComponent;

void UWGAiAction::OnGlobalBehaviorChanged(EGlobalBehaviors _eBehavior, const bool _bFromDialog) {
}

void UWGAiAction::BPF_RemoveAbilitySystemGameplayTag(const FGameplayTag& _tag) {
}

AFightingPlayerController* UWGAiAction::BPF_GetFirstPlayerController() const {
    return NULL;
}

AFightingCharacter* UWGAiAction::BPF_GetFirstPlayerCharacter() const {
    return NULL;
}

AFightingCharacter* UWGAiAction::BPF_GetFightingCharacter() const {
    return NULL;
}

AFightingCharacter* UWGAiAction::BPF_GetEnemyCharacter() const {
    return NULL;
}

AFightingCharacter* UWGAiAction::BPF_GetCurrentTarget() const {
    return NULL;
}

AFightingAIController* UWGAiAction::BPF_GetAIFightingController() const {
    return NULL;
}

UAIFightingComponent* UWGAiAction::BPF_GetAIFightingComponent() const {
    return NULL;
}

USCCrowdFollowingComponent* UWGAiAction::BPF_GetAICrowdFollingComponent() const {
    return NULL;
}

void UWGAiAction::BPF_AddAbilitySystemGameplayTag(const FGameplayTag& _tag) {
}

void UWGAiAction::BPE_OnCreatedOrderParams_Implementation(FName _paramsName, UOrderParams* _orderParams) {
}

UWGAiAction::UWGAiAction() {
    this->m_eDesiredSpeedState = ESpeedState::None;
    this->m_bLockSpeedStateOnSchedule = false;
    this->m_bCancelOnGlobalBehaviorChange = false;
    this->m_bCancellable = true;
    this->m_CancelConditionOperator = EComboAIConditionGroupOperator::OR;
    this->m_bForceIdleExit = true;
}

