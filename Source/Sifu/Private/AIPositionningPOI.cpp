#include "AIPositionningPOI.h"

FAIPositionningPOI::FAIPositionningPOI() {
    this->m_fEnemyDistanceZTolerance = 0.00f;
    this->m_bUseRotation = false;
    this->m_bKeepLockMoveOnWayToPOI = false;
    this->m_bCanUseAttackTickets = false;
    this->m_bCanBecomeDirectOpponent = false;
    this->m_bJiggle = false;
    this->m_eCombatRolesMask = 0;
    this->m_fCooldownWhenOccupantLeaves = 0.00f;
    this->m_eRoleOnTargetCloserToMinRange = ESCAICombatRoles::None;
}

