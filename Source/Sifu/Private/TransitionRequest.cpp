#include "TransitionRequest.h"

FTransitionRequest::FTransitionRequest() {
    this->m_eInSpeedState = ESpeedState::V0;
    this->m_eInCardinalPoint = ESCCardinalPoints::North;
    this->m_eOutSpeedState = ESpeedState::V0;
    this->m_eOutCardinalPoint = ESCCardinalPoints::North;
    this->m_eVelocityRotation = ETransitionRotation::Degree_0;
    this->m_fAbsVelocityAngle = 0.00f;
    this->m_bIsRotationLeft = false;
}

