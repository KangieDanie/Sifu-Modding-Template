#include "PhysicAnimOrderService.h"

UPhysicAnimOrderService::UPhysicAnimOrderService() {
    this->m_bEnabled = true;
    this->m_bRequireCurve = false;
    this->m_CurveName = TEXT("PhysicBlend");
    this->m_fBlendOutDuration = 0.10f;
}

