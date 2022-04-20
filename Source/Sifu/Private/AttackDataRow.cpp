#include "AttackDataRow.h"

FAttackDataRow::FAttackDataRow() {
    this->m_bCanBeMirrored = false;
    this->m_eMirroringMethod = EAttackMirroringMethod::BasedOnQuadrantToTarget;
    this->m_fMirrorUseNextFootMarkerThreshold = 0.00f;
    this->m_eStartQuadrant = EQuadrantTypes::FrontLeft;
    this->m_eEndQuadrant = EQuadrantTypes::FrontLeft;
    this->m_fMeasuredForwardMovement = 0.00f;
    this->m_fMovementRightLength = 0.00f;
    this->m_bDirectRightMovementFollow = false;
    this->m_iLastBuildupFrame = 0;
    this->m_fHitFrame = 0.00f;
    this->m_bStrikelessAttack = false;
}

