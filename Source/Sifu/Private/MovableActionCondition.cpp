#include "MovableActionCondition.h"

UMovableActionCondition::UMovableActionCondition() {
    this->m_HasAction = InputAction::AttackLight;
    this->m_bIgnoreNonMovables = true;
}

