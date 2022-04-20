#include "HittedOrderService.h"

class UAttackPropertiesResistanceDB;

UAttackPropertiesResistanceDB* UHittedOrderService::BPE_GetSpecialResistanceDB_Implementation(const FBPOrderServiceInstance& _orderServiceInstance) const {
    return NULL;
}

FHittedAnimContainer UHittedOrderService::BPE_GetLethalHittedAnim_Implementation(const FBPOrderServiceInstance& _orderServiceInstance) const {
    return FHittedAnimContainer{};
}

void UHittedOrderService::BPE_GetHitRequest_Implementation(const FBPOrderServiceInstance& _orderServiceInstance, FHitRequest& _hitRequest, FHitResult& _hitResult) const {
}

void UHittedOrderService::BPE_GetHitBox_Implementation(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox, FHitResult& _envLocation) const {
}

FAnimContainer UHittedOrderService::BPE_GetFightingStateRecoveryAnim_Implementation(const FBPOrderServiceInstance& _orderServiceInstance) const {
    return FAnimContainer{};
}

FAnimContainer UHittedOrderService::BPE_GetFightingStateLoopAnim_Implementation(const FBPOrderServiceInstance& _orderServiceInstance) const {
    return FAnimContainer{};
}

UHittedOrderService::UHittedOrderService() {
    this->m_bFreezeInstigator = false;
    this->m_eInstigatorOrderType = EOrderType::None;
}

