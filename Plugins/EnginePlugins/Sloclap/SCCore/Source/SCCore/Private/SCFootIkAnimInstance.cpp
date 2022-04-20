#include "SCFootIkAnimInstance.h"

USCFootIkAnimInstance::USCFootIkAnimInstance() {
    this->m_fMaxSlopeAngle = 0.00f;
    this->m_fThighToFootDistDiff = 0.00f;
    this->m_footName = TEXT("foot");
    this->m_thighName = TEXT("thigh");
    this->m_ikSuffix = TEXT("_ik");
    this->m_bInvalidateLastGroundOnMarkerHit = false;
    this->m_fLerpToSpringMultiplier = 1.00f;
    this->m_eHandledMovementModes.AddDefaulted(3);
    this->m_bIgnoreLevelDesignCollisions = false;
    this->m_fRawToMarkerAlphaDuration = 0.30f;
    this->m_fHipsAttenuation = 0.80f;
    this->m_bHipsUseLerp = false;
    this->m_fHipsDampingSpeed = 5.00f;
    this->m_fMaxHipsHeightDisplacement = 15.00f;
    this->m_bIsHipsDisplacementValid = true;
    this->m_bIsFootIkEnabled = true;
}

