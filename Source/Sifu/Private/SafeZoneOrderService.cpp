#include "SafeZoneOrderService.h"

USafeZoneOrderService::USafeZoneOrderService() {
    this->m_iMaxIterations = 3;
    this->m_bUseTargetSnapToBlend = false;
    this->m_fBlendDuration = 0.20f;
    this->m_fMaxSpeed = 500.00f;
    this->m_TargetBone = TEXT("custom_joint_05");
}

