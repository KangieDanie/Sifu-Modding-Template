#include "HitOrderService.h"

class AActor;

AActor* UHitOrderService::BPE_GetInstigator_Implementation(const FBPOrderServiceInstance& _orderServiceInstance) const {
    return NULL;
}

void UHitOrderService::BPE_GetIgnoredActors_Implementation(const FBPOrderServiceInstance& _orderServiceInstance, TArray<AActor*>& _actors) const {
}

void UHitOrderService::BPE_GetHitBoxWithLocation_Implementation(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox, FHitResult& _envLocation, FVector& _location) const {
}

void UHitOrderService::BPE_GetHitBox_Implementation(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox, FHitResult& _envLocation) const {
}

UHitOrderService::UHitOrderService() {
    this->m_bFreezeInstigator = false;
    this->m_bIgnoreOwner = true;
    this->m_bOrderTargetIsInstigator = false;
    this->m_bIgnoreTarget = false;
    this->m_bPersistIgnoredActorsFromPreviousOrderService = true;
    this->m_bUseBoneLocationFromAnim = true;
    this->m_bUpdateHitboxVelocity = true;
}

