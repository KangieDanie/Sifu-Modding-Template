#include "OrderFallFromPushedDB.h"

UOrderFallFromPushedDB::UOrderFallFromPushedDB() {
    this->m_fMinFallVelocity = 400.00f;
    this->m_fMaxFallVelocity = 500.00f;
    this->m_bRedirectToSlopeDir = false;
    this->m_fDelayBeforeEnteringFallFromPushed = 0.10f;
}

