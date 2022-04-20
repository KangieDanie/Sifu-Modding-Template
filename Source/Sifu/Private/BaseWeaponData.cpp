#include "BaseWeaponData.h"





UBaseWeaponData::UBaseWeaponData() {
    this->m_bUseSwapHand = true;
    this->m_bMirrorAllowed = true;
    this->m_bAllowFakieFromAnimNotify = true;
    this->m_DesignatedTargetPreciseSearchWidthCurveForAttack = NULL;
    this->m_DesignatedTargetRoughSearchWidthCurveForAttack = NULL;
    this->m_afDamageReceiveFromAttackPower[0] = 0.00f;
    this->m_afDamageReceiveFromAttackPower[1] = 0.00f;
    this->m_afDamageReceiveFromAttackPower[2] = 0.00f;
    this->m_afGuardTypeDamageMultiplier[0] = 0.00f;
    this->m_afGuardTypeDamageMultiplier[1] = 0.00f;
    this->m_afGuardTypeDamageMultiplier[2] = 0.00f;
    this->m_SlowMotionCurve = NULL;
    this->m_fSlowMotionScale = 0.00f;
    this->m_ThrowFromPickupAnimRequest = NULL;
    this->m_bUseSpecificMirrorPickupAnim = false;
}

