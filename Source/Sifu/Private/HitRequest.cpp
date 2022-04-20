#include "HitRequest.h"

FHitRequest::FHitRequest() {
    this->m_eInstigatorType = EInstigatorType::Item;
    this->m_eAttackerLimb = ELimbs::LeftArm;
    this->m_uiDamageID = 0;
    this->m_uiAttackOrderID = 0;
    this->m_bCastBoundariesRelativeToInstigator = false;
    this->m_bMirror = false;
    this->m_uiHitBoxID = 0;
    this->m_bCanBeDefended = false;
}

