#include "AIActionRainDashes.h"

void UAIActionRainDashes::BPF_OnFinishDash() {
}

UAIActionRainDashes::UAIActionRainDashes() {
    this->m_fMinDistanceForFinalDash = 300.00f;
    this->m_iMaxNumberOfDashes = 3;
    this->m_FirstDashLeft = NULL;
    this->m_FirstDashRight = NULL;
    this->m_IntermediateDashLeft = NULL;
    this->m_IntermediateDashRight = NULL;
    this->m_FinalDash = NULL;
}

