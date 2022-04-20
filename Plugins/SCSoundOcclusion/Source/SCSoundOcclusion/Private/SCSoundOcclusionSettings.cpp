#include "SCSoundOcclusionSettings.h"

USCSoundOcclusionSettings::USCSoundOcclusionSettings() {
    this->m_fMaxPathDist = 3000.00f;
    this->m_fMaxPathFactor = 1.90f;
    this->m_RTPCOcclusionName = TEXT("RTPC_Occlusion");
    this->m_eOcclusionMode = ESCOcclusionMode::RTPC;
}

