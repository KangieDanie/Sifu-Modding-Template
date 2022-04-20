#include "DeathDB.h"

UDeathDB::UDeathDB() {
    this->m_bFallOnSlopes = false;
    this->m_fKnockBackDistance[0] = 0.00f;
    this->m_fKnockBackDistance[1] = 0.00f;
    this->m_fKnockBackDistance[2] = 0.00f;
    this->m_iNbFrameStuned[0] = 0;
    this->m_iNbFrameStuned[1] = 0;
    this->m_iNbFrameStuned[2] = 0;
    this->m_Sequence = NULL;
    this->m_fDelayBeforeSequence = 3.00f;
    this->m_fFloorCorrectionCoeff = 5.00f;
    this->m_fCollisionsFreeRadius = 50.00f;
    this->m_bCameraTargetPelvis = false;
}

