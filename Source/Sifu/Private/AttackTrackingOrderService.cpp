#include "AttackTrackingOrderService.h"

void UAttackTrackingOrderService::BPF_GetTrackingLocation(const FBPOrderServiceInstance& _instance, bool& _bSuccess, FVector& _value) {
}

UAttackTrackingOrderService::UAttackTrackingOrderService() {
    this->m_fForceTrackingFrames = 20.00f;
    this->m_bAlwaysTrackHittedTarget = true;
    this->m_bIsTrackingWindowOpenedByDefault = false;
    this->m_bIsRushAttack = false;
    this->m_bUseDisplacementDirAsAttackDir = false;
}

