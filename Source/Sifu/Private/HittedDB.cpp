#include "HittedDB.h"

UHittedDB::UHittedDB() {
    this->m_fLowDistanceFromRoot = 20.00f;
    this->m_fHighDistanceFromRoot = 30.00f;
    this->m_fHalfAngleSouth = 25.00f;
    this->m_fItemHalfAngleSouth = 45.00f;
    this->m_fAutoKillTimeMax = 6.00f;
    this->m_fAutoKillHeightMax = 2000.00f;
    this->m_fMediumFallHeightThreshold = 280.00f;
    this->m_fHeavyFallHeightThreshold = 450.00f;
    this->m_fFallMaxHeight = 1000.00f;
    this->m_fDamagePercentAssistDetectionThreshold = 0.10f;
    this->m_fDamagePercentKillDetectionThreshold = 0.50f;
    this->m_fDamageHistoryNotInFightTimeOut = 10.00f;
    this->m_fDamageHistoryOutOfRangeTimeOut = 10.00f;
    this->m_fDamageHistoryDeadTimeOut = 10.00f;
    this->m_fDamageHistoryInvalidTimeOut = 30.00f;
    this->m_bTimeSinceLastHitPrevails = false;
    this->m_bLongestStunPrevailsBetweenHits = false;
    this->m_bKnockbackDurationBoundToAnimation = false;
    this->m_bHitDamagesDetailsDebugActivated = false;
    this->m_HitRecoveryAvailability = NULL;
    this->m_HitAnimationRequest = NULL;
    this->m_FallHitRequest = NULL;
}

