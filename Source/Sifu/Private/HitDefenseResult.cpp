#include "HitDefenseResult.h"

FHitDefenseResult::FHitDefenseResult() {
    this->m_eDefenseOrder = EOrderType::Attack;
    this->m_uiOrderID = 0;
    this->m_uiDefenseType = 0;
    this->m_bHitDismissed = false;
    this->m_bResultRemoved = false;
    this->m_DB = NULL;
}

