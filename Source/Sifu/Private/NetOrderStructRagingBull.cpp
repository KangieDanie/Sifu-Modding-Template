#include "NetOrderStructRagingBull.h"

FNetOrderStructRagingBull::FNetOrderStructRagingBull() {
    this->m_ePhase = ERagingBullPhase::Entry;
    this->m_fMaxAngularSpeed = 0.00f;
    this->m_bHasMissedTarget = false;
}

