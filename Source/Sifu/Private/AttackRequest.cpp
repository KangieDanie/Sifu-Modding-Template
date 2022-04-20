#include "AttackRequest.h"

FAttackRequest::FAttackRequest() {
    this->m_eInputAction = InputAction::AttackLight;
    this->m_eCurrentQuadrant = EQuadrantTypes::FrontLeft;
    this->m_Combo = NULL;
    this->m_iComboNodeID = 0;
    this->m_fStartRatio = 0.00f;
    this->m_AttackDB = NULL;
}

