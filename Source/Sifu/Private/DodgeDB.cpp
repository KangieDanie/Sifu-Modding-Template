#include "DodgeDB.h"

UDodgeDB::UDodgeDB() {
    this->m_fMaxDodgeRetargettingDistance = 300.00f;
    this->m_bWantDodgeLock = true;
    this->m_fDodgeOpponentAttackRangeTolerance = 50.00f;
    this->m_bDefaultDodgeQuadrantSwitchActivated = false;
    this->m_bInvertRedirectOnBackQuadrant = true;
    this->m_GuardGaugeCostOverWeightRatio = NULL;
    this->m_bSmoothedOrderDodgeNotifyStartDT = true;
    this->m_animRequest = NULL;
}

