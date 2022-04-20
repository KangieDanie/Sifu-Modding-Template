#include "AttackTicketConfig.h"

FAttackTicketConfig::FAttackTicketConfig() {
    this->m_eBehavior = FAttackTicketBehavior::Active;
    this->m_bTicketIsAlwaysAvailable = false;
    this->m_eCombatRole = ESCAICombatRoles::None;
    this->m_eCombatRolesMask = 0;
    this->m_iCount = 0;
    this->m_fCooldownOffsetOnSynchedFires = 0.00f;
    this->m_fCooldownSynchFiresTolerance = 0.00f;
    this->m_fForcedCooldownOnDirectOpponentDeath = 0.00f;
    this->m_bIsRepeated = false;
    this->m_bUseMinDistanceToPosition = false;
    this->m_fMinDistanceToPosition = 0.00f;
    this->m_bEnableIneligibleTimerOnRelease = false;
    this->m_bIsNotUsedInCombo = false;
    this->m_fMoveToTimeoutValue = 0.00f;
    this->m_eBehaviorAgainstJoker = EPassiveTicketBehaviorAginstJoker::IgnoreAllJokers;
}

