#include "SpeedCondition.h"

USpeedCondition::USpeedCondition() {
    this->m_eSpeedState = ESpeedState::V3;
    this->m_bAcceptMoveTransitions = true;
    this->m_eOperation = EOperationType::Equal;
}

