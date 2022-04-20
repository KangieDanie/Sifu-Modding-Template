#include "PushPropertyReaction.h"

FPushPropertyReaction::FPushPropertyReaction() {
    this->m_EnvAttackRanges[0] = 0.00f;
    this->m_EnvAttackRanges[1] = 0.00f;
    this->m_EnvAttackRanges[2] = 0.00f;
    this->m_EnvAttackRanges[3] = 0.00f;
    this->m_fAttackEnvCapsuleExtent = 0.00f;
    this->m_fEnvAttackMaxAngleDeg = 0.00f;
    this->m_fEnvAttackMaxAngleWitoutSnapDeg = 0.00f;
    this->m_fNavigationCostHeuristicScale = 0.00f;
    this->m_fNavigationMaxPathCost = 0.00f;
}

