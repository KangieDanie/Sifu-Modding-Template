#include "ReplayKeyCutData.h"

FReplayKeyCutData::FReplayKeyCutData() {
    this->m_eCutType = EReplayKeyCutType::None;
    this->m_bFadingEnabled = false;
    this->m_fFadingTime = 0.00f;
}

