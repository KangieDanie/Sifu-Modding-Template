#include "LookAtConfigData.h"

ULookAtConfigData::ULookAtConfigData() {
    this->m_fMaxRequiredYaw = 180.00f;
    this->m_fMaxRequiredPitch = 90.00f;
    this->m_eMaxSpeedState = ESpeedState::V3;
    this->m_eNeededMoveStatus = EMoveStatus::None;
    this->m_fTimerBeforeLookAt = 0.00f;
    this->m_fRotationMultiplier = -1.00f;
    this->m_fMaxClampedYaw = -1.00f;
    this->m_fMaxClampedPitch = -1.00f;
}

