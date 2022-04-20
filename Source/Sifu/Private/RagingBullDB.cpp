#include "RagingBullDB.h"

URagingBullDB::URagingBullDB() {
    this->m_fMaxAngularSpeed = 0.00f;
    this->m_fWantedSpeed = 0.00f;
    this->m_fWantedTravelDistance = 0.00f;
    this->m_bStopOnTargetMissed = true;
    this->m_fMissedTravelDistance = 0.00f;
    this->m_iAnimBuildUpFrames = 0;
    this->m_iWantedBuildupFrames = 0;
    this->m_fDistanceToSwitchAnimation = 0.00f;
}

