#include "ImpactResult.h"

FImpactResult::FImpactResult() {
    this->m_bIsValid = false;
    this->m_fDamage = 0.00f;
    this->m_bGuardBreak = false;
    this->m_bSuperDizzyAlreadyAvailable = false;
    this->m_bSuperDizzyAvailable = false;
    this->m_Victim = NULL;
    this->m_eImpactCardinalPoint = ESCCardinalPoints::North;
    this->m_eImpactCardinalPointInVictimSpace = ESCCardinalPoints::North;
    this->m_bAlreadyGuardBroken = false;
    this->m_bCriticalHit = false;
    this->m_eHeight = EHeight::High;
    this->m_eImpactType = EImpactType::Hit;
    this->m_eGuardType = EGuardType::None;
    this->m_fInstigatorStructureBeforeImpact = 0.00f;
    this->m_fHitAnimationTimeElapsedDuringFreeze = 0.00f;
    this->m_bLethal = false;
    this->m_eTowardInstigatorQuadrant = EQuadrantTypes::FrontLeft;
    this->m_eDefenderQuadrant = EQuadrantTypes::FrontLeft;
    this->bPushedBlockForce = false;
    this->m_fInstigatorFreezeDuration = 0.00f;
    this->m_fStunTime = 0.00f;
    this->m_bResilienceImpact = false;
    this->m_bPlaySFX = false;
    this->m_bPlayDeathSFX = false;
    this->m_bPlayVFX = false;
    this->m_bAvoidDizzy = false;
}

