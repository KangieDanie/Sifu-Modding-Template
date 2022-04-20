#include "StaminaOrderService.h"

UStaminaOrderService::UStaminaOrderService() {
    this->m_eImpactOnStart = EStaminaImpactType::StopRecovery;
    this->m_fImpactCostOnStart = 0.00f;
    this->m_eImpactOnStop = EStaminaImpactType::StartRecovery;
    this->m_fImpactCostOnStop = 0.00f;
}

