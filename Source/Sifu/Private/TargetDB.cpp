#include "TargetDB.h"

UTargetDB::UTargetDB() {
    this->m_eTargetVisibleCollisionChannel = ECC_GameTraceChannel6;
    this->m_uiFightingAiBehaviorMask = 4294967247;
    this->m_aUseTargetingReaction[0] = 0;
    this->m_aUseTargetingReaction[1] = 0;
    this->m_aUseTargetingReaction[2] = 0;
    this->m_aUseTargetingReaction[3] = 0;
    this->m_aUseTargetingReaction[4] = 0;
    this->m_aUseTargetingReaction[5] = 0;
    this->m_aUseTargetingReaction[6] = 0;
    this->m_MoveStatusOutOfFightRange[0] = EMoveStatus::Exploration;
    this->m_MoveStatusOutOfFightRange[1] = EMoveStatus::Exploration;
    this->m_MoveStatusOutOfFightRange[2] = EMoveStatus::Exploration;
    this->m_MoveStatusOutOfFightRange[3] = EMoveStatus::Exploration;
    this->m_MoveStatusOutOfFightRange[4] = EMoveStatus::Exploration;
    this->m_MoveStatusOutOfFightRange[5] = EMoveStatus::Exploration;
    this->m_MoveStatusInFightRange[0] = EMoveStatus::Exploration;
    this->m_MoveStatusInFightRange[1] = EMoveStatus::Exploration;
    this->m_MoveStatusInFightRange[2] = EMoveStatus::Exploration;
    this->m_MoveStatusInFightRange[3] = EMoveStatus::Exploration;
    this->m_MoveStatusInFightRange[4] = EMoveStatus::Exploration;
    this->m_MoveStatusInFightRange[5] = EMoveStatus::Exploration;
    this->m_MaxZDiff = NULL;
    this->m_fTargetMaxRange = 1500.00f;
}

