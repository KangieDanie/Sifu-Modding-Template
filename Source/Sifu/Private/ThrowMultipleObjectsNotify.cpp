#include "ThrowMultipleObjectsNotify.h"

UThrowMultipleObjectsNotify::UThrowMultipleObjectsNotify() {
    this->m_fHorizontalAngleRange = 45.00f;
    this->m_uiNbThrowables = 5;
    this->m_ThrowableClass = NULL;
    this->m_bBreakThrowableAfterThrow = true;
    this->m_fVerticalOffsetSpawnPosition = 50.00f;
    this->m_fVerticalOffsetTargetDirection = 0.00f;
}

