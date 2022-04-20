#include "WeaponAnimInfo.h"

FWeaponAnimInfo::FWeaponAnimInfo() {
    this->m_eWeaponAnimType = EWeaponAnimType::AnimSequence;
    this->m_weaponAnimAssociated = NULL;
    this->m_weaponBlendSpaceAssociated = NULL;
    this->m_playRateCurve = NULL;
    this->m_eBlendSpaceComputeTime = EWeaponBlendSpaceComputeTime::AtOrderStart;
    this->m_eOrientationConstraint = EWeaponOrientationConstraint::NoConstraint;
}

