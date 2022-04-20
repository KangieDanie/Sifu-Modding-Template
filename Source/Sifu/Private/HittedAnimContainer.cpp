#include "HittedAnimContainer.h"

FHittedAnimContainer::FHittedAnimContainer() {
    this->m_bLockAttacker = false;
    this->m_eReorientationBehaviour = EKnockbackReorientationBehaviour::ReorientToAttacker;
    this->m_bInterruptible = false;
    this->m_bInterruptAnimationOnEnd = false;
    this->m_bScaleAnimationToHitDuration = false;
    this->m_bInvertReorientationFromBehind = false;
    this->m_eOrientationOffset = ESCCardinalPoints::North;
    this->m_bUseRootMotion = false;
    this->m_bIgnoreHitKnockbackDistance = false;
    this->m_bOverrideHitDuration = false;
    this->m_fOverrideHitDuration = 0.00f;
}

