#include "ThrowObjectNotify.h"

UThrowObjectNotify::UThrowObjectNotify() {
    this->m_fRotationSpeed = 360.00f;
    this->m_fRandomRangeForRotationSpeed = 50.00f;
    this->m_bUseRandomRotationAxisWhileFlying = false;
    this->m_bInvertAxisOnMirror = true;
    this->m_bUseThrowPivot = false;
    this->m_bForceThrowableOrientationAtStart = false;
}

