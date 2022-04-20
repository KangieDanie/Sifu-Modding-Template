#include "SCAiAction.h"

class UObject;
class ASCCharacter;
class USCAIComponent;
class UBlackboardComponent;

void USCAiAction::BPF_SetBlackBoardValueAsVector(FName _key, const FVector& _vValue) const {
}

void USCAiAction::BPF_SetBlackBoardValueAsObject(FName _key, UObject* _value) const {
}

void USCAiAction::BPF_SetBlackBoardValueAsInt(FName _key, int32 _iValue) const {
}

void USCAiAction::BPF_SetBlackBoardValueAsFloat(FName _key, float _fValue) const {
}

void USCAiAction::BPF_SetBlackBoardValueAsBool(FName _key, bool _bValue) const {
}

USCAIComponent* USCAiAction::BPF_GetOwnerAiComponent() const {
    return NULL;
}

ASCCharacter* USCAiAction::BPF_GetOwner() const {
    return NULL;
}

void USCAiAction::BPF_GetEnvQueryParameterValue(FName _paramName, const ASCCharacter* _owner, FSCTypedValue& _outValue) const {
}

FVector USCAiAction::BPF_GetBlackBoardValueAsVector(FName _key) const {
    return FVector{};
}

UObject* USCAiAction::BPF_GetBlackBoardValueAsObject(FName _key) const {
    return NULL;
}

int32 USCAiAction::BPF_GetBlackBoardValueAsInt(FName _key) const {
    return 0;
}

float USCAiAction::BPF_GetBlackBoardValueAsFloat(FName _key) const {
    return 0.0f;
}

bool USCAiAction::BPF_GetBlackBoardValueAsBool(FName _key) const {
    return false;
}

UBlackboardComponent* USCAiAction::BPF_GetBlackBoardComponent() const {
    return NULL;
}

void USCAiAction::BPF_Finish(bool _bSucceeded, const FString& _message) {
}

void USCAiAction::BPF_CancelPendingActions(USCAIComponent* _aiComponent) {
}

void USCAiAction::BPF_Cancel(const FString& _message) {
}

void USCAiAction::BPE_OnOrderStarted_Implementation(FName _orderParamsName, uint8 _uiOrderId) {
}

void USCAiAction::BPE_OnOrderFinished_Implementation(FName _orderParamsName, uint8 _uiOrderId) {
}

void USCAiAction::BPE_OnNamedEvent_Implementation(FName _eventName) {
}



FString USCAiAction::BPE_GetName_Implementation() const {
    return TEXT("");
}


void USCAiAction::BPE_Execute_Implementation(UBlackboardComponent* _blackBoardComponent) {
}

bool USCAiAction::BPE_CanPerform_Implementation(const USCAIComponent* _aiComponent) const {
    return false;
}

USCAiAction::USCAiAction() {
    this->m_BehaviorTreeAsset = NULL;
    this->m_eScheduleCondition = EAIActionScheduleCondition::None;
}

