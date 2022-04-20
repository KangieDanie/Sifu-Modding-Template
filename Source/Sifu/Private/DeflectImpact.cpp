#include "DeflectImpact.h"

FDeflectImpact::FDeflectImpact() {
    this->m_KnockBackDynamic = NULL;
    this->m_bSelfStructureDamageCanGuardBreak = false;
    this->m_bUseSelfStructureDamage = false;
    this->m_fSelfStructureDamage = 0.00f;
    this->m_bUseSelfSuperDizzyDamage = false;
    this->m_fSelfSuperDizzyDamage = 0.00f;
}

