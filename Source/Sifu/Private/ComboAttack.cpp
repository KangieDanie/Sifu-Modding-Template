#include "ComboAttack.h"

FComboAttack::FComboAttack() {
    this->m_animation = NULL;
    this->m_bUsePreviousAttackFakieState = false;
    this->m_fAnimFrameRate = 0.00f;
    this->m_fAnimFrameDeltaTime = 0.00f;
    this->m_iWantedBuildupFrames = 0;
    this->m_bOverrideMinBuildupForwardDisplacement = false;
    this->m_fMinBuildupForwardDisplacement = 0.00f;
    this->m_bOverrideAnimRange = false;
    this->m_fGameplayRange = 0.00f;
    this->m_bIgnoreRange = false;
    this->m_bWantCustomMaxDisSnap = false;
    this->m_fCustomMaxDisSnap = 0.00f;
    this->m_fSnapbackMargin = 0.00f;
    this->m_bWantSnap = false;
    this->m_bWantSnapBack = false;
    this->m_bWantSnapDuringStrike = false;
    this->m_bIsRushAttack = false;
    this->m_bAlwaysTrackHittedTarget = false;
    this->m_fMaxTrackingAngle = 0.00f;
    this->m_bApplyHitWithoutAttack = false;
    this->m_eApplyDamageOnWeaponType = EApplyDamageOnWeaponType::Always;
}

