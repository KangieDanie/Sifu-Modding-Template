#include "OrderDB.h"




UOrderDB::UOrderDB() {
    this->m_eOrderType = EOrderType::None;
    this->m_ePushFightingStateOnStart = EFightingActionState::None;
    this->m_bPopFightingStateOnStop = true;
    this->m_bIsStunOrder = false;
    this->m_bDelayHitsWhenStarting = false;
    this->m_eVisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPose;
    this->m_bAnimgraphShouldAlwaysTick = false;
    this->m_bEnableIK = true;
    this->m_bOverrideLookAtApplyMode = false;
    this->m_eOverridenLookAtApplyMode = ELookAtApplyMode::Procedural_Spine;
    this->m_bOverrideLookAtRefDirMode = false;
    this->m_eOverridenLookAtRefDirMode = ELookAtRefDirMode::AnimDir;
    this->m_bOrderToLocoUseSpeedStateSpeedForStartingSpeedBlend = false;
}

