#include "ComboTransitionConditionAIAttackMemory.h"

UComboTransitionConditionAIAttackMemory::UComboTransitionConditionAIAttackMemory() {
    this->m_bTestThrowAttack = false;
    this->m_eAttackOrigin = EAIMemoryAttackType::AttackLaunched;
    this->m_fMemoryLimit = 10.00f;
    this->m_uiHitsCount = 3;
    this->m_bSuccessive = false;
    this->m_bWhiff = false;
    this->m_HitTypes = 0;
    this->m_bDodged = false;
    this->m_bAvoided = false;
}

