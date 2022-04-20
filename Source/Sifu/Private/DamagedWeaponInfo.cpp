#include "DamagedWeaponInfo.h"

FDamagedWeaponInfo::FDamagedWeaponInfo() {
    this->m_WeaponDataToApplyOnBrokenWeapon = NULL;
    this->m_WeaponGameplayDataToApplyOnBrokenWeapon = NULL;
    this->m_fDamagedWeaponHealth = 0.00f;
    this->m_StateSkeletalMesh = NULL;
}

