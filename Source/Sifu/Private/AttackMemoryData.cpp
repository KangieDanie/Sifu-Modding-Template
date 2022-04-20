#include "AttackMemoryData.h"

FAttackMemoryData::FAttackMemoryData() {
    this->m_uiOderId = 0;
    this->m_eGuardType = EGuardType::None;
    this->m_iComboID = 0;
    this->m_bHasHit = false;
    this->m_bDodged = false;
    this->m_bAvoided = false;
}

