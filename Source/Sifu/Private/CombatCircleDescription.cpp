#include "CombatCircleDescription.h"

FCombatCircleDescription::FCombatCircleDescription() {
    this->m_fOffsetFromPreviousCircle = 0.00f;
    this->m_fOffsetRotation = 0.00f;
    this->m_fSafePositionOffset = 0.00f;
    this->m_NbPositionsToGenerate = 0;
    this->m_fPositionGenerationThreshold = 0.00f;
    this->m_bAllowSnapAfterRaycast = false;
    this->m_fSnapSafeDistance = 0.00f;
    this->m_fNavPickingTolerance = 0.00f;
}

