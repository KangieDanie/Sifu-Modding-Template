#include "WeaponOverrideInfo.h"

FWeaponOverrideInfo::FWeaponOverrideInfo() {
    this->m_ContextualDefenseOverride = NULL;
    this->m_AvoidAbility = NULL;
    this->m_MovementDB = NULL;
    this->m_bActivateAttackTicketFactorsOverride = false;
    this->m_bActivateCirclePerCombatRoleOverride = false;
    this->m_bOverrideLocomotionPaceSelector = false;
}

