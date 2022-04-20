#include "AttackPropertyLevel.h"

FAttackPropertyLevel::FAttackPropertyLevel() {
    this->m_Level[0] = 0;
    this->m_Level[1] = 0;
    this->m_Level[2] = 0;
    this->m_bUseCustomDuration = false;
    this->m_fCustomDuration = 0.00f;
    this->m_bUseHitAnimDuration = false;
    this->m_bKeepCurrentStateDuration = false;
    this->m_fKeepCurrentStateThresold = 0.00f;
    this->m_bUseCustomDistance = false;
    this->m_fCustomDistance = 0.00f;
}

