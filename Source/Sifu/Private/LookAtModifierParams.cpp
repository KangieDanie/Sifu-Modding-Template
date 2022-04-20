#include "LookAtModifierParams.h"

FLookAtModifierParams::FLookAtModifierParams() {
    this->m_bOverrideSpringSpeed = false;
    this->m_fOverridenSpringSpeed = 0.00f;
    this->m_fRotationMultiplier = 0.00f;
    this->m_fMaxClampedYaw = 0.00f;
    this->m_fMaxClampedPitch = 0.00f;
}

