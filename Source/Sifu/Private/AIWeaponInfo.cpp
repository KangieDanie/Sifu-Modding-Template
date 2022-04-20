#include "AIWeaponInfo.h"

FAIWeaponInfo::FAIWeaponInfo() {
    this->m_WeaponInfoForAI = NULL;
    this->m_bCanFetch = false;
    this->m_bUseThiWeaponAtStart = false;
    this->m_bWeaponShouldBreakWhenDropped = false;
    this->m_bWeaponShouldRegenerateAfterThrown = false;
    this->m_bWeaponCanTakeDamage = false;
}

