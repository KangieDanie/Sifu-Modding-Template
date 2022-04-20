#include "ForceQuadrantOrderService.h"

UForceQuadrantOrderService::UForceQuadrantOrderService() {
    this->m_bForceBackFrontOnly = false;
    this->m_bForceFront = true;
    this->m_eQuadrantToTarget = EQuadrantTypes::None;
}

