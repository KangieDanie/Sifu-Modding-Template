#include "InteractiveMovable.h"

class AActor;

void AInteractiveMovable::OnUpdatedFromSaveCallback() {
}

void AInteractiveMovable::OnPreSaveLevel() {
}

void AInteractiveMovable::BPF_SetInstigator(AActor* _Instigator) {
}

void AInteractiveMovable::BPF_SetActivate(bool _bActivated) {
}

bool AInteractiveMovable::BPF_IsReadyToUse() const {
    return false;
}

FVector AInteractiveMovable::BPF_GetPivotLoc() const {
    return FVector{};
}

AActor* AInteractiveMovable::BPF_GetInstigator() {
    return NULL;
}

FVector AInteractiveMovable::BPF_GetHUDLocation() const {
    return FVector{};
}

EDebugMovableState AInteractiveMovable::BPF_GetDebugMovableState() const {
    return EDebugMovableState::TooFar;
}








AInteractiveMovable::AInteractiveMovable() {
    this->m_bEnableSreamingEvents = false;
    this->m_fAngularFallingSpeedThreshold = 0.00f;
    this->m_fLinearFallingSpeedThreshold = 0.00f;
    this->m_throwTargetSettingsDB = NULL;
}

