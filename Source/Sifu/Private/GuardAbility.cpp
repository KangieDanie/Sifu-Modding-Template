#include "GuardAbility.h"

class AFightingCharacter;

bool UGuardAbility::BPF_CanActivateTakedown(AFightingCharacter* _owner) const {
    return false;
}

bool UGuardAbility::BPF_CanActivateParryGrab(AFightingCharacter* _owner) const {
    return false;
}



UGuardAbility::UGuardAbility() {
    this->m_bEnableNewGuard = false;
    this->m_bEnableDeflectInterruptOnDeflectNonInterrupt = false;
    this->m_bAlwaysShowParry = false;
    this->m_eForceGuardALBinaryOperation = EALBinaryOperation::OR;
    this->m_iForceGuardALBinaryPriority = 0;
    this->m_HoldToggleResetOnGuardLost.AddDefaulted(4);
}

