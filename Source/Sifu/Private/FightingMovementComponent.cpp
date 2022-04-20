#include "FightingMovementComponent.h"

class UEffectData;
class AActor;
class UBaseMovementDB;

void UFightingMovementComponent::ServerPopDesyncFromServer_Implementation(uint8 _uiResyncID) {
}
bool UFightingMovementComponent::ServerPopDesyncFromServer_Validate(uint8 _uiResyncID) {
    return true;
}

void UFightingMovementComponent::OnEffectAddedOrRemovedCallback(bool _bAdded, UEffectData* _effectData) {
}

FVector UFightingMovementComponent::GetRealVelocity() const {
    return FVector{};
}

float UFightingMovementComponent::GetRealSpeed() const {
    return 0.0f;
}

FVector UFightingMovementComponent::GetRealHorizontalVelocity() const {
    return FVector{};
}

float UFightingMovementComponent::GetRealHorizontalSpeed() const {
    return 0.0f;
}

void UFightingMovementComponent::BPF_SetMoveStatus(EMoveStatus _eMoveStatus) {
}

void UFightingMovementComponent::BPF_ResetBaseMovementDBToDefault() {
}

void UFightingMovementComponent::BPF_PushBlockV2(AActor* _blocker) {
}

void UFightingMovementComponent::BPF_PopBlockV2(AActor* _blocker) {
}

void UFightingMovementComponent::BPF_OverrideBaseMovementDB(UBaseMovementDB* _newBaseMovementDB) {
}

bool UFightingMovementComponent::BPF_IsRushing() const {
    return false;
}

FVector UFightingMovementComponent::BPF_GetLastWantedDir() const {
    return FVector{};
}

float UFightingMovementComponent::BPF_GetFreeMoveSpeed(const FVector& _vLocalDir, const float _fGlobalIntensity, const ESpeedState& _eSpeedState) const {
    return 0.0f;
}

float UFightingMovementComponent::BPF_GetFreeMoveOverallAnimSpeed(ESpeedState _eSpeedState) const {
    return 0.0f;
}

float UFightingMovementComponent::BPF_GetFreeMoveMinSpeed(ESpeedState _eSpeedState) const {
    return 0.0f;
}

float UFightingMovementComponent::BPF_GetFreeMoveMaxSpeed(ESpeedState _eSpeedState) const {
    return 0.0f;
}

float UFightingMovementComponent::BPF_GetFreeMoveAnimSpeed(ESpeedState _eSpeedState) const {
    return 0.0f;
}

EFallLevel UFightingMovementComponent::BPF_GetFallLevel() const {
    return EFallLevel::Light;
}

ETraversalPhase UFightingMovementComponent::BPF_GetCurrentTraversalPhase() const {
    return ETraversalPhase::Entry;
}

ESpeedState UFightingMovementComponent::BPF_GetCurrentSpeedState() const {
    return ESpeedState::V0;
}

UFightingMovementComponent::UFightingMovementComponent() {
    this->m_fPenetrationExpulsionSpeed = 400.00f;
    this->m_eMoveStatus = EMoveStatus::None;
    this->m_BaseMovementDB = NULL;
    this->m_bOverlapOnRemoveCollision = true;
    this->m_bPushForceScaledToMassInNavWalking = false;
    this->m_fInitialPushForceFactorInNavWalking = 500.00f;
    this->m_fPushForceFactorInNavWalking = 750000.00f;
    this->m_fFlyModeSpeed = 720.00f;
    this->m_fFlyModeRushSpeed = 2000.00f;
    this->m_TraversalInfosDB = NULL;
}

