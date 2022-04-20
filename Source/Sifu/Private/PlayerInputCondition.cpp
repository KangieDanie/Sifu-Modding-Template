#include "PlayerInputCondition.h"

UPlayerInputCondition::UPlayerInputCondition() {
    this->m_eInput = InputAction::Move;
    this->m_bCheckAvailabilityLayers = false;
    this->m_eTestMethod = EPlayerInputConditionTestMethod::IsBestActionAvailable;
}

