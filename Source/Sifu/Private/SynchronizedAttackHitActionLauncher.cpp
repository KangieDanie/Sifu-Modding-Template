#include "SynchronizedAttackHitActionLauncher.h"

class AFightingCharacter;

bool USynchronizedAttackHitActionLauncher::BPF_AreHitLethal(AFightingCharacter* _victimChar, const TArray<FOverridingHitBox>& _hitsToApply) {
    return false;
}



USynchronizedAttackHitActionLauncher::USynchronizedAttackHitActionLauncher() {
    this->m_bMirrorByQuadrant = false;
    this->m_eInstigatorOrderType = EOrderType::SynchronizedAttackInstigator;
    this->m_eVictimOrderType = EOrderType::SynchronizedAttackVictim;
    this->m_bIsInstigatorSnaper = false;
    this->m_bIsVictimSnaper = false;
    this->m_bCanCounterGrab = false;
    this->m_bUseVictimForQuadrantComputation = false;
    this->m_eStartQuadrant = EQuadrantTypes::FrontLeft;
    this->m_bMirrorOnBackFrontQuadrant = true;
}

