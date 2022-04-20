#include "LookAtLocomotionLimits.h"

FLookAtLocomotionLimits::FLookAtLocomotionLimits() {
    this->m_eSpeedState = ESpeedState::V0;
    this->m_eMoveStatus = EMoveStatus::Exploration;
}

