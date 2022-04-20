#include "AIActionDash.h"

UAIActionDash::UAIActionDash() {
    this->m_fAttackRange = 0.00f;
    this->m_bUseTargetPositionPrediction = true;
    this->m_fTargetPositionPredictionRatio = 1.00f;
    this->m_bOverrideOrientation = false;
    this->m_fDirectionAngle = 0.00f;
    this->m_fDistance = 0.00f;
    this->m_bSnapOnTarget = false;
    this->m_fSnapDistance = 100.00f;
    this->m_fChargeDuration = 0.00f;
}

