#include "WeaponGameplayData.h"



UWeaponGameplayData::UWeaponGameplayData() {
    this->m_throwFromPickUpTargetSettingsDB = NULL;
    this->m_afDamageReceiveFromAttackPower[0] = 0.00f;
    this->m_afDamageReceiveFromAttackPower[1] = 0.00f;
    this->m_afDamageReceiveFromAttackPower[2] = 0.00f;
    this->m_SlowMotionCurve = NULL;
    this->m_fSlowMotionScale = 1.00f;
}

