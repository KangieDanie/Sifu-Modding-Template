#include "ThrowableObjMovementComponent.h"

UThrowableObjMovementComponent::UThrowableObjMovementComponent() {
    this->m_fThrowFreelyZForceHands = 1.00f;
    this->m_fThrowFreelyZForceFeet = 1.00f;
    this->m_fThrowFreelyZForceFeetAlt = 1.00f;
    this->m_SpeedCurve = NULL;
    this->m_fFrictionForce = 1.00f;
}

