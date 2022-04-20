#include "AIActionTraversalAttack.h"

void UAIActionTraversalAttack::BPF_OnReachedEntryPoint() {
}

UAIActionTraversalAttack::UAIActionTraversalAttack() {
    this->m_fMiniumDistBetweenInstigatorAndTarget = 200.00f;
    this->m_fTargetRadiusPrecision = 250.00f;
    this->m_fAttackCancelMinDistance = 200.00f;
    this->m_fEntryPointReEvaluatePrecision = 30.00f;
    this->m_fOffsetOnTraversalSide = 0.00f;
}

