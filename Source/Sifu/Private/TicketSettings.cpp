#include "TicketSettings.h"

UTicketSettings::UTicketSettings() {
    this->m_bActivateWeaponTicketManager = true;
    this->m_fDefaultWeaponTicketCooldown = 15.00f;
    this->m_fWeaponTicketCooldownIncreaseValue = 0.00f;
    this->m_fWeaponTicketCooldownDecreaseValue = 0.00f;
    this->m_fDefaultMaxDistanceToWeapon = 500.00f;
    this->m_fMinDistanceForCandidateAttackCancel = 170.00f;
    this->m_fMinDistanceForAttackTicketTimeOut = 300.00f;
}

