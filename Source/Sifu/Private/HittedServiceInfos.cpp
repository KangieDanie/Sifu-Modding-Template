#include "HittedServiceInfos.h"

FHittedServiceInfos::FHittedServiceInfos() {
    this->m_bDiscardHitOrderOnSurvive = false;
    this->m_bDiscardHitOrderOnKill = false;
    this->m_bDropWeaponOnKill = false;
    this->m_bDiscardFightingStatesOrders = false;
    this->m_bEnqueueFightingStateOrder = false;
    this->m_DeathAnimationOnStop = NULL;
    this->m_bMirrorDeathAnimation = false;
    this->m_bGenerateImpactOnStop = false;
    this->m_bUseCustomHitAnimOnKill = false;
    this->m_bUseCustomHitAnimOnSurvive = false;
    this->m_bForceDamageToHitBox = false;
    this->m_bForceStructureDamageToHitBox = false;
    this->m_bLaunchFightingStateOrderAfterCurrentAnim = false;
    this->m_bStructureBrokenOrderWaitForEndOfAnim = false;
    this->m_bDelayKillToNextHit = false;
    this->m_bUseCustomFightingStateLoopAnim = false;
    this->m_bUseCustomFightingStateRecoveryAnim = false;
    this->m_bPlayHitSFX = false;
    this->m_bPlayDeathSFX = false;
    this->m_bPlayHitVFX = false;
}

