#include "OrderServiceInfos.h"

FOrderServiceInfos::FOrderServiceInfos() {
    this->m_bDisabled = false;
    this->m_eFreezeFrameHandling = EOrderServiceFreezeFrameHandling::Freeze;
    this->m_bActivateFromFrameRange = false;
    this->m_bActivateWhenMissingFromAnim = false;
    this->m_activationCondition = NULL;
    this->m_bInvertCondition = false;
}

