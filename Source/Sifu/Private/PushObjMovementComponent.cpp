#include "PushObjMovementComponent.h"

void UPushObjMovementComponent::BPF_SetObjectState(EPushableState _eState, bool _bResetIgnoreWhenMoving) {
}

float UPushObjMovementComponent::BPF_GetCurrentTime() const {
    return 0.0f;
}

int32 UPushObjMovementComponent::BPF_GetCurrentSpeedStep() {
    return 0;
}

void UPushObjMovementComponent::BPF_GenerateAndStartMovement(const FVector& _vDir, float _fStartStep) {
}

void UPushObjMovementComponent::BPF_CalculateMovementBox(const FVector& _vLastControlPoint, FBox& _OutBox) {
}

FVector UPushObjMovementComponent::BPF_CalculateLastPointLocation(const FVector& _vDir) {
    return FVector{};
}

UPushObjMovementComponent::UPushObjMovementComponent() {
    this->m_iNumPoints = 10;
    this->m_fDist = 100.00f;
    this->m_fGroundTraceOffset = 100.00f;
    this->m_SpeedCurve = NULL;
    this->m_fMaxRotationSpeed = 360.00f;
    this->m_fOnRailSpeedReduc = 5.00f;
    this->m_fOnRailGravScale = 1.00f;
    this->m_fAngleTransitionTime = 0.50f;
    this->m_fShortenedDistThreshold = 0.70f;
    this->m_fSpeedOnRail = 50.00f;
    this->m_fTimeToReachSpeedOnRail = 2.00f;
}

