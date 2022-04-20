#include "UpdateCameraBlackboardBTService.h"

class AFightingCharacter;
class UAttackComponent;
class UCameraComponentThird;
class UPlayerFightingComponent;
class UASMComponent;

void UUpdateCameraBlackboardBTService::BPF_UpdateIsInFlyModeKey(FBlackboardKeySelector _IsInFlyModeKey) {
}

void UUpdateCameraBlackboardBTService::BPF_UpdateIsInDialogKey(FBlackboardKeySelector _IsInDialogKey) {
}

void UUpdateCameraBlackboardBTService::BPF_UpdateIsDuckingKey(FBlackboardKeySelector _DuckingKey) {
}

FPlayerStatesStatus UUpdateCameraBlackboardBTService::BPF_GetPlayerStateStatus(EFightingActionState _eFightingState) const {
    return FPlayerStatesStatus{};
}

UPlayerFightingComponent* UUpdateCameraBlackboardBTService::BPF_GetPlayerFightingComponent() const {
    return NULL;
}

AFightingCharacter* UUpdateCameraBlackboardBTService::BPF_GetFightingCharOwner() const {
    return NULL;
}

EDirections UUpdateCameraBlackboardBTService::BPF_GetCharacterSideOnScreen() const {
    return EDirections::Left;
}

UCameraComponentThird* UUpdateCameraBlackboardBTService::BPF_GetCameraComponent() const {
    return NULL;
}

UAttackComponent* UUpdateCameraBlackboardBTService::BPF_GetAttackComponent() const {
    return NULL;
}

UASMComponent* UUpdateCameraBlackboardBTService::BPF_GetASMComponent() const {
    return NULL;
}





UUpdateCameraBlackboardBTService::UUpdateCameraBlackboardBTService() {
}

