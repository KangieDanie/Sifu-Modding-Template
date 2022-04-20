#include "HitImpact.h"

FHitImpact::FHitImpact() {
    this->m_bUseDamage = false;
    this->m_fDamage = 0.00f;
    this->m_bUseStructureDamage = false;
    this->m_fStructureDamage = 0.00f;
    this->m_bUseSuperDizzyDamage = false;
    this->m_fSuperDizzyDamage = 0.00f;
    this->m_bUseNbFrameStuned = false;
    this->m_iNbFrameStuned = 0;
    this->m_bUseKnockBackDistance = false;
    this->m_fKnockBackDistance = 0.00f;
    this->m_bUseFreezeFrames = false;
    this->m_iFreezeFrames = 0;
}

