#include "FilterProperties.h"

FFilterProperties::FFilterProperties() {
    this->m_bUserConfigured = false;
    this->m_fExposure = 0.00f;
    this->m_fVignette = 0.00f;
    this->m_fGrain = 0.00f;
    this->m_fFilterWeight = 0.00f;
    this->m_fFogDensity = 0.00f;
    this->m_uiAspectRatioIndex = 0;
    this->m_uiLogoIndex = 0;
    this->m_eLogoScreenLocation = EScreenLocation::TopLeft;
}

