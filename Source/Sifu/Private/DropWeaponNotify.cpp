#include "DropWeaponNotify.h"

UDropWeaponNotify::UDropWeaponNotify() {
    this->m_bImpulseInLocalSocketSpace = true;
    this->m_eImpulseCharacterSpace = ECoordinateSystem::Local;
    this->m_ApplyMode = EDropNotifyApplyMode::OnSelf;
    this->m_eDropReason = EDropReason::Default;
}

