#include "DetectFallOrderService.h"

FVector UDetectFallOrderService::BPE_GetDirection_Implementation(const FBPOrderServiceInstance& _instance) const {
    return FVector{};
}

UDetectFallOrderService::UDetectFallOrderService() {
    this->m_IgnoreWhenDead = true;
    this->m_bProjectVelocityOnDirection = true;
    this->m_eReactionOnStart = ESlopeReaction::None;
    this->m_eSlopeReactionWhenStartsOnSlope = ESlopeReaction::FallOnSlope;
    this->m_fEnterLeaveSlopeHitActivationDelay = 0.10f;
    this->m_bHasHitOnEnterSlope = false;
    this->m_bHasHitOnLeaveSlope = false;
    this->m_eSlopeReaction = ESlopeReaction::FallFromPushed;
    this->m_fSteepSlopeAngleThreshold = 20.00f;
    this->m_eSteepSlopeReaction = ESlopeReaction::FallFromPushed;
    this->m_fFarSlopeHAngleMinDegree = 22.00f;
    this->m_eFarSlopeHAngleReaction = ESlopeReaction::FallOnSlope;
}

