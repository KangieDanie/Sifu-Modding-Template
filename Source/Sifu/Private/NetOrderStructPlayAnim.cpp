#include "NetOrderStructPlayAnim.h"

FNetOrderStructPlayAnim::FNetOrderStructPlayAnim() {
    this->m_bUseRootMotion = false;
    this->m_bOverrideDynamic = false;
    this->m_OverrideDynamicCurve = NULL;
    this->m_bBlendPreviousSpeed = false;
    this->m_fBlendPreviousSpeedDuration = 0.00f;
    this->m_bOverrideDuration = false;
    this->m_fOverrideDuration = 0.00f;
    this->m_bInterruptAfterDelay = false;
    this->m_fInterruptDelay = 0.00f;
    this->m_bOverrideDistance = false;
    this->m_fOverrideDistance = 0.00f;
    this->m_bIsOverrideDistanceAbsolute = false;
    this->m_bOverrideDirection = false;
    this->m_bOverrideOrientation = false;
    this->m_bOverridePlayRate = false;
    this->m_fOverridePlayRate = 0.00f;
    this->m_fFrozenPlayRate = 0.00f;
    this->m_bIsInfinite = false;
    this->m_bIsMovingOrder = false;
    this->m_bUseStartRatioOnNewLoop = false;
    this->m_bAllowMirroringOnWeapon = false;
    this->m_eForcedQuadrant = EQuadrantTypes::FrontLeft;
}

