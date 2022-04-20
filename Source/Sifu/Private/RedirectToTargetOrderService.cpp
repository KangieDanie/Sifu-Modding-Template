#include "RedirectToTargetOrderService.h"

FVector URedirectToTargetOrderService::BPF_GetRedirectionOrigin(const FVector& _target, const FBPOrderServiceInstance& _instance) const {
    return FVector{};
}

FVector URedirectToTargetOrderService::BPE_GetTarget_Implementation(const FBPOrderServiceInstance& _instance) const {
    return FVector{};
}

float URedirectToTargetOrderService::BPE_GetMaxAngularSpeed_Implementation(const FBPOrderServiceInstance& _instance) const {
    return 0.0f;
}

URedirectToTargetOrderService::URedirectToTargetOrderService() {
    this->m_StartAfterTargetService = NULL;
    this->m_bUseAnimRootMotion = false;
    this->m_bApplyEvenIfNoRootRotation = false;
    this->m_bForceAnimRotationWay = false;
    this->m_eRootRotationWay = ESCRotationWay::CounterClockWise;
    this->m_bUseTargetableActorComponentLocation = true;
    this->m_bWantLock = true;
    this->m_bUseFakeDirIfNoTarget = false;
    this->m_bInvertDirOnBackQuadrant = false;
    this->m_fRedirectFrames = -1.00f;
    this->m_fMaxAngleFromTarget = 180.00f;
    this->m_fMaxAngleFromStart = 180.00f;
    this->m_eRedirectionOrigin = ERedirectToTargetOrigin::Root;
    this->m_eOrientationApplyMethod = EOrientationApplyMethod::CharacterAndMovement;
}

