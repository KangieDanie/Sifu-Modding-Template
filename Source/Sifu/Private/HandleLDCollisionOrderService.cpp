#include "HandleLDCollisionOrderService.h"


void UHandleLDCollisionOrderService::BPE_GetWallHitBox_Implementation(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox) const {
}

FHittedAnimContainer UHandleLDCollisionOrderService::BPE_GetHittedAnimContainer_Implementation(const FBPOrderServiceInstance& _orderServiceInstance) const {
    return FHittedAnimContainer{};
}

void UHandleLDCollisionOrderService::BPE_GetHitBox_Implementation(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox) const {
}

void UHandleLDCollisionOrderService::BPE_GetDirection_Implementation(const FBPOrderServiceInstance& _orderServiceInstance, FVector& _vOutDir) const {
}

UHandleLDCollisionOrderService::UHandleLDCollisionOrderService() {
    this->m_bHandleHittedByEnvironment = true;
    this->m_bWallHitMinAngleDegUseCurve = false;
    this->m_fWallHitMinAngleDeg = 10.00f;
    this->m_fWallHitMinVelocity = 10.00f;
    this->m_bInverseOrientationOnHit = false;
    this->m_bUseCustomWallHit = false;
    this->m_bBlockedByTarget = false;
    this->m_bActivateHitbox = true;
    this->m_bIgnoreHitOnTarget = false;
    this->m_bUseCustomHitbox = false;
    this->m_fActivateHitboxMinVelocity = 0.00f;
    this->m_bDetectTraversal = true;
    this->m_fDetectTraversalDuration = 0.50f;
    this->m_fTraversalDetectionDistance = 100.00f;
    this->m_eTraversalCardinal = ESCCardinalPoints::South;
    this->m_eTraversalSpeedState = ESpeedState::V0;
    this->m_bSetTargetAsOwningChar = true;
}

