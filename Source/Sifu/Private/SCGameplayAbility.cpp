#include "SCGameplayAbility.h"

class AActor;
class UScriptStruct;
class AFightingCharacter;
class UBaseTargetEvaluation;
class USCGameplayAbility;

UBaseTargetEvaluation* USCGameplayAbility::BPF_GetTargetEvaluationFromTargetResult(const AFightingCharacter* _character, const FTargetResult& _targetInfos) const {
    return NULL;
}

AActor* USCGameplayAbility::BPF_GetTarget(const FSCGameplayAbilityActorInfo& _ActorInfo, const FGameplayEventData& _triggerEventData) const {
    return NULL;
}

InputAction USCGameplayAbility::BPF_GetFirstBestAction(const FSCGameplayAbilityActorInfo& _ActorInfo) const {
    return InputAction::AttackLight;
}

FVector2D USCGameplayAbility::BPF_GetActionVectorValue(const FSCGameplayAbilityActorInfo& _actoInfos) const {
    return FVector2D{};
}






uint8 USCGameplayAbility::BasePlayOrder(USCGameplayAbility* _self, const FSCGameplayAbilityActivationInfo& _activationInfo, bool _bOnTarget, AActor* _customTarget, EOrderType _eOrderType, FName _BPOrderID, FPlayOrderInfos _playOrderInfos, bool _bBindToAbility, UScriptStruct* _baseNetOrderType, const FNetOrderStruct& _netOrderStruct) {
    return 0;
}

USCGameplayAbility::USCGameplayAbility() {
    this->m_bCommitAbilityOnOrderStart = false;
    this->m_Payload = NULL;
    this->m_bIgnoreAvailabilityLayers = false;
    this->m_bToggleAbility = false;
    this->m_bHoldToToggle = false;
    this->m_bConsumeAndResetInputs = true;
    this->m_AvailabilityLayersWhileActive = NULL;
    this->m_eALOperation = EALBinaryOperation::SET;
    this->m_bTargetBecomesLockMoveTarget = false;
    this->m_CooldownGameplayEffectClassOnAbilityEnd = NULL;
    this->m_PayloadInstance = NULL;
}

