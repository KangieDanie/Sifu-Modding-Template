#include "RushAttackDB.h"

URushAttackDB::URushAttackDB() {
    this->m_fRushAttackMinTime = 0.50f;
    this->m_bFailedAttackRushFalseTracking = false;
    this->m_fRushAttackTrackingAngle = 90.00f;
}

