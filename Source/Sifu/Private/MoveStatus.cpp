#include "MoveStatus.h"

FMoveStatus::FMoveStatus() {
    this->m_bExploration = false;
    this->m_bCombat = false;
    this->m_bNone = false;
    this->m_eMoveStatus = EMoveStatus::Exploration;
}

