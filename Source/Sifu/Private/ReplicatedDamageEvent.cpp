#include "ReplicatedDamageEvent.h"

FReplicatedDamageEvent::FReplicatedDamageEvent() {
    this->m_fDemoTimeS = 0.00f;
    this->m_fBaseDamage = 0.00f;
    this->m_fDamageRadius = 0.00f;
    this->m_fImpulseStrength = 0.00f;
    this->m_bFullDamage = false;
}

