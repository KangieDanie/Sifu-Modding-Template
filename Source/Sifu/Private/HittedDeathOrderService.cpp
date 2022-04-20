#include "HittedDeathOrderService.h"

UHittedDeathOrderService::UHittedDeathOrderService() {
    this->m_DeathAnimation = NULL;
    this->m_bMirrorDeathAnimation = false;
    this->m_bUnspawnNow = true;
    this->m_uiDeathTriggeredConditionMask = 3;
}

