#include "DetailedMoveTransition.h"

FDetailedMoveTransition::FDetailedMoveTransition() {
    this->m_eInSpeedState = ESpeedState::V0;
    this->m_bAllowAllInCardinal = false;
    this->m_eInCardinalPoint = ESCCardinalPoints::North;
    this->m_eOutSpeedState = ESpeedState::V0;
    this->m_eOutCardinalPoint = ESCCardinalPoints::North;
    this->m_bFilterByVelocityRotation = false;
    this->m_eVelocityRotation = ETransitionRotation::Degree_0;
    this->m_bOverrideVelocityRotationRange = false;
    this->m_eVelocityRotationDirection = ETransitionRotationDirection::Left;
    this->m_eResultingTransition = EMoveTransitionType::StopV1;
}

