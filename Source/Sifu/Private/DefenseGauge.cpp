#include "DefenseGauge.h"

FDefenseGauge::FDefenseGauge() {
    this->m_fMaxValue = 0.00f;
    this->m_fCooldownBeforeRecovery = 0.00f;
    this->m_fRecoveryRatePerSec = 0.00f;
    this->m_fRecoveryRatePerSecWhenComplete = 0.00f;
}

