#include "FightingCameraWeightComponent.h"

void UFightingCameraWeightComponent::OnGlobalBehaviorChanged(EGlobalBehaviors _eNewBehavior, const bool _bFromDialog) {
}

UFightingCameraWeightComponent::UFightingCameraWeightComponent() {
    this->m_bClampAdditiveWeight = false;
    this->m_fMaxAbsAdditiveWeight = 1.00f;
    this->m_fDialogInvolvedAdditiveWeight = 0.00f;
    this->m_fDialogSpeakerAdditiveWeight = 1.00f;
}

