#include "AnimDrivenCameraOrderBTService.h"


UAnimDrivenCameraOrderBTService::UAnimDrivenCameraOrderBTService() {
    this->m_eOrderType = EOrderType::Attack;
    this->m_bForceAsCurrentCamera = false;
    this->m_bWaitForFirstFrameOrderService = true;
    this->m_eComputationMethod = ECameraAnimDrivenComputationMethod::ClosestAngle;
}

