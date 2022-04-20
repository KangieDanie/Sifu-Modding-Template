#include "FightingStateElement.h"

FFightingStateElement::FFightingStateElement() {
    this->m_bPause = false;
    this->m_fStateDuration = 0.00f;
    this->m_fElapsedTime = 0.00f;
    this->m_bInfinite = false;
    this->m_fMaxAccumulatedDamages = 0.00f;
    this->m_fAccumulatedDamages = 0.00f;
    this->m_iMaxAccumulatedHits = 0;
    this->m_iAccumulatedHits = 0;
    this->m_eState = EFightingState::OutOfFight;
    this->m_eSubFightingState = ESubFightingState::None;
}

