#include "AIActionAttack.h"

void UAIActionAttack::BPF_NotifyAttackStarted() const {
}



float UAIActionAttack::BPE_GetAttackRange_Implementation() const {
    return 0.0f;
}

UAIActionAttack::UAIActionAttack() {
    this->m_bCheckObstacles = false;
    this->m_bCheckFriendlyFire = false;
}

