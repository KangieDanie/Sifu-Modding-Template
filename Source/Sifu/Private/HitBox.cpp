#include "HitBox.h"

FHitBox::FHitBox() {
    this->m_HitDetectionDB = NULL;
    this->m_eHitTarget = EAttackTarget::High;
    this->m_eAltHitTarget = EAttackTarget::High;
    this->m_eAimTarget = EIKAnimTargetTypes::Target;
    this->m_eMovementType = EAttackMovementType::Thrust;
    this->m_eOrigin = EAttackOrigin::Left;
    this->m_eAvoidCustomOrigin = EAttackOrigin::Left;
    this->m_eAvoidCustomHitTarget = EAttackTarget::High;
    this->m_eAvoidCustomMovementType = EAttackMovementType::Thrust;
}

