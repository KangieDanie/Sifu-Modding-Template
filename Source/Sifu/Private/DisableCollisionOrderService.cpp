#include "DisableCollisionOrderService.h"

UDisableCollisionOrderService::UDisableCollisionOrderService() {
    this->m_bWithTargetOnly = false;
    this->m_bCollisionWithStaticMeshOn = true;
    this->m_bBlockTargettedAttacks = true;
    this->m_bEnableCollisionsOnLastThreat = false;
}

