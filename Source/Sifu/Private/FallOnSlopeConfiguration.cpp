#include "FallOnSlopeConfiguration.h"

FFallOnSlopeConfiguration::FFallOnSlopeConfiguration() {
    this->m_fWakeVelocityThreshold = 0.00f;
    this->m_fMaxDuration = 0.00f;
    this->m_ImpulseCurve = NULL;
    this->m_fAngularDamping = 0.00f;
    this->m_fLinearDamping = 0.00f;
}

