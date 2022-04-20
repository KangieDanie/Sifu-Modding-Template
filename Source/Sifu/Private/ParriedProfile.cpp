#include "ParriedProfile.h"

FParriedProfile::FParriedProfile() {
    this->m_fParriedDuration = 0.00f;
    this->m_eParriedReorientationBlendType = ESCBlendType::Linear;
    this->m_ParriedReorientationCurve = NULL;
}

