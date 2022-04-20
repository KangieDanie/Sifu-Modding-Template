#include "AIAttackJokerSituationConfig.h"

FAIAttackJokerSituationConfig::FAIAttackJokerSituationConfig() {
    this->m_bEnabled = false;
    this->m_fJokerDuration = 0.00f;
    this->m_fCooldown = 0.00f;
    this->m_bShouldBeDeactivatedByTargetAttack = false;
    this->m_eJokerBehaviorOnAIAttacks = EAIJokerBehaviorAgainstAttacks::Ignore;
}

