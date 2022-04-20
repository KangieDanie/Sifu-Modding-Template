#include "AttackMemoryInfluenceTest.h"

UAttackMemoryInfluenceTest::UAttackMemoryInfluenceTest() {
    this->m_bTestThrowAttack = false;
    this->m_fMemoryLimit = 0.00f;
    this->m_uiHitsCount = 3;
    this->m_HitTypes = 0;
    this->m_bDodged = false;
    this->m_bAvoided = false;
}

