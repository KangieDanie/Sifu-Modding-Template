#include "MappingID.h"

FMappingID::FMappingID() {
    this->m_eAction = InputAction::AttackLight;
    this->m_eContext = InputContext::BasicGameplay;
    this->m_bUsePreset = false;
}

