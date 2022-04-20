#include "SCRagdollConfigDB.h"

USCRagdollConfigDB::USCRagdollConfigDB() {
    this->m_fDetectionRadius = 0.00f;
    this->m_fBoneDetectionRadius = 0.00f;
    this->m_fForceFactor = 1.00f;
    this->m_fDelayBetweenImpulses = 1.00f;
    this->m_fMinimumPlayerVelocity = 50.00f;
    this->m_PlayerVelocityCurve = NULL;
    this->m_fDetectionFrequency = 0.10f;
    this->m_fDelayBeforeSleep = 3.00f;
}

