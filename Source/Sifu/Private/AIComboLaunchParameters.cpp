#include "AIComboLaunchParameters.h"

FAIComboLaunchParameters::FAIComboLaunchParameters() {
    this->m_bCheckCanAttack = false;
    this->m_bCheckTicketAvailable = false;
    this->m_bMoveToTargetRange = false;
    this->m_Target = NULL;
    this->m_iRepeats = 0;
    this->m_bCancelPendingActions = false;
    this->m_bTestInputActionAvailable = false;
}

