#include "AppliedHitImpact.h"

FAppliedHitImpact::FAppliedHitImpact() {
    this->m_fDamage = 0.00f;
    this->m_fStructureDamage = 0.00f;
    this->m_fSuperDizzyDamage = 0.00f;
    this->m_iNbFrameStuned = 0;
    this->m_bUseKnockBackDistance = false;
    this->m_fKnockBackDistance = 0.00f;
    this->m_iFreezeFrames = 0;
}

