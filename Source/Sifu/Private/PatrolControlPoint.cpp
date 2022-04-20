#include "PatrolControlPoint.h"

FPatrolControlPoint::FPatrolControlPoint() {
    this->m_bOverrideActivityAnimation = false;
    this->m_bOverrideActivityDuration = false;
    this->m_fOverridenActivityDuration = 0.00f;
    this->m_eSpeedStateToUse = ESpeedState::V0;
}

