#include "TranslateToTargetOrderService.h"

FVector UTranslateToTargetOrderService::BPE_GetTarget_Implementation(const FBPOrderServiceInstance& _instance) const {
    return FVector{};
}

UTranslateToTargetOrderService::UTranslateToTargetOrderService() {
    this->m_bUseAnimRootMotion = false;
}

