#include "OrderFallOnSlopeEntryDB.h"

UOrderFallOnSlopeEntryDB::UOrderFallOnSlopeEntryDB() {
    this->m_bForceVelocity = false;
    this->m_fForceVelocity = 600.00f;
    this->m_bForceVelocityOnPlaneGround = false;
    this->m_fForceVelocityOnPlaneGround = 100.00f;
    this->m_SlopeDetectionDB = NULL;
}

