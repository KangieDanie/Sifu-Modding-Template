#include "HitBoxComponent.h"

class AFightingCharacter;

void UHitBoxComponent::BPF_SetOwningCharacter(AFightingCharacter* _owningCharacter) {
}

UHitBoxComponent::UHitBoxComponent() {
    this->m_fMinVelocity = 0.00f;
    this->m_bRecoveryAfterDelay = false;
    this->m_fRecoveryAfterDelay = 10.00f;
    this->m_bRecoveryOnLeaveZone = false;
}

