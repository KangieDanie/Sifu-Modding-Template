#include "ThrowableData.h"

UThrowableData::UThrowableData() {
    this->m_iHitByCharaDamage = 1;
    this->m_iHitByObjectDamage = 1;
    this->m_fDistToThrow = 200.00f;
    this->m_fFallingSpeedThreshold = 0.00f;
    this->m_fColScaleDuration = 0.40f;
    this->m_fOnTargetHitSpeedReduction = 3.00f;
    this->m_fMissingSpeedReduc = 2.00f;
    this->m_fMissedDistance = 50.00f;
    this->m_bApplyGravityWhenFlyingFreely = true;
    this->m_BounceBackAngle = NULL;
    this->m_fSoundNoiseRadius = 1000.00f;
    this->m_eTargettedHeight = EHeight::None;
    this->m_eAltTargettedHeight = EHeight::Low;
    this->m_bUseAlternateHeightForFreeThrow = false;
    this->m_throwTargetSettingsDB = NULL;
    this->m_fHeightLimitForFootAnimation = 20.00f;
    this->m_fOffsetDistTrace = 20.00f;
    this->m_fDistToCheckCollOnPathFreely = 400.00f;
    this->m_bStayVisibleAfterBeingDestroyed = false;
    this->m_fThrowFreelyZForceHands = 1.00f;
    this->m_fThrowFreelyZForceFeet = 1.00f;
    this->m_fThrowFreelyZForceFeetAlt = 1.00f;
    this->m_fTargetDistMaxToSwitchToFreely = 1500.00f;
    this->m_SpeedCurve = NULL;
    this->m_fInitialSpeedOnThrow = 0.00f;
    this->m_fProjectileGravityScale = 0.00f;
    this->m_fBounciness = 1.00f;
    this->m_fFrictionOnBounce = 0.00f;
    this->m_eBounceType = EBounceType::SimpleBounce;
}

