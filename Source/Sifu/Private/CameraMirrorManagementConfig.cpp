#include "CameraMirrorManagementConfig.h"

FCameraMirrorManagementConfig::FCameraMirrorManagementConfig() {
    this->m_eMirrorType = ECameraMirrorManagementType::UseSpring;
    this->m_fTargetValue = 0.00f;
    this->m_fSpringSpeed = 0.00f;
    this->m_bInstantSpring = false;
    this->m_eBlenderBlendType = ESCBlendType::Linear;
    this->m_BlenderCustomCurve = NULL;
    this->m_fBlenderDuration = 0.00f;
}

