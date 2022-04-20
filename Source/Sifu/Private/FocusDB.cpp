#include "FocusDB.h"

UFocusDB::UFocusDB() {
    this->m_ClassOfBillBoardToSpawn = NULL;
    this->m_ClassOfVitalPointToSpawn = NULL;
    this->m_eFocusTraceType = ECC_WorldStatic;
    this->m_fTimeDuration = 5.00f;
    this->m_fMaxDist = 500.00f;
    this->m_fSlowMotionFactor = 0.05f;
    this->m_fCameraSlowMotionFactor = 0.20f;
    this->m_fAnimationSlowMotionFactor = 0.20f;
    this->m_fDelayBeforeFocusExecution = 0.50f;
    this->m_fSlowMoFactorBeforeFocusExecution = 0.01f;
    this->m_fPostProcessFadeInDuration = 0.15f;
    this->m_fPostProcessFadeOutDuration = 0.15f;
    this->m_fVitalPointsFXFadeInDuration = 0.15f;
}

