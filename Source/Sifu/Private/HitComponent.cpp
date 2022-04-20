#include "HitComponent.h"
#include "Templates/SubclassOf.h"

class UHitAnimRequest;
class UHittedDB;

void UHitComponent::OnDangerStateChangedCallback(EDangerStates _ePreviousDangerState, EDangerStates _eNewDangerState) {
}

void UHitComponent::BPF_ResetHitAnimRequestToDefault() {
}

void UHitComponent::BPF_OverrideHitAnimRequest(TSubclassOf<UHitAnimRequest> _hitAnimRequest) {
}

FGameplayTagContainer UHitComponent::BPF_GetTags() const {
    return FGameplayTagContainer{};
}

UHittedDB* UHitComponent::BPF_GetHittedDB() const {
    return NULL;
}

UHitAnimRequest* UHitComponent::BPF_GetHitAnimRequest() const {
    return NULL;
}

void UHitComponent::BPF_GenerateFakeImpact(const FHitResult& _hitResult, const FHitRequest& _inHitRequest) {
}

bool UHitComponent::BPE_ValidateHit_Implementation(const FHitResult& _hitResult, const FHitRequest& _inHitRequest) const {
    return false;
}


UHitComponent::UHitComponent() {
    this->m_Curve = NULL;
    this->m_fHitStrength = 100.00f;
    this->m_bCriticalHitEvenOnResilience = false;
    this->m_fDamageMultiplierCriticalHit = 1.00f;
    this->m_fGuardDamageMultiplierCriticalHit = 1.00f;
    this->m_fStunTimeMultiplierCriticalHit = 1.00f;
    this->m_iAdditionnalFreezeFramesCriticalHit = 0;
    this->m_iFreezeFramesLethalHit = 12;
    this->m_DefaultKnockBackDynamic = NULL;
    this->m_fHittedTrackingDuration = 0.00f;
    this->m_fHittedTrackingMaxAngleFromTarget = 90.00f;
    this->m_fHittedFrozenPlayRate = 0.20f;
    this->m_fHittedFrontQuadrant = 90.00f;
    this->m_fLowHeightDiffCapsuleHalfHeightFactorThresold = 0.70f;
    this->m_fHighHeightDiffCapsuleHalfHeightFactorThresold = 1.00f;
    this->m_HittedDB = NULL;
    this->m_fBrokenGuardDisarmCoef = 1.50f;
    this->m_fDisarmGaugeRegenRate = 0.03f;
    this->m_fDisarmGaugeRegenRateWhileHoldingWeapon = 0.00f;
}

