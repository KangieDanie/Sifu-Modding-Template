#include "PushConfiguration.h"






UPushConfiguration::UPushConfiguration() {
    this->m_fPushEnvRedirectionLimitAngle = 10.00f;
    this->m_fExpectedSnapDistance = 50.00f;
    this->m_fLandingDistanceFromFloorToConsidereFall = 20.00f;
    this->m_fDistanceFromEdgeToTestFloorHeight = 50.00f;
    this->m_fFloorSearchDistance = 1000.00f;
    this->m_fHeightSearchDistanceOnNormal = 10.00f;
}

