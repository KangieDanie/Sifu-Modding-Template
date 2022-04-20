#include "ReplayKeyData.h"

FReplayKeyData::FReplayKeyData() {
    this->m_iKeyIndex = 0;
    this->m_iKeyFrameIndex = 0;
    this->m_fTime = 0.00f;
    this->m_fDilatedTime = 0.00f;
    this->m_fTimeDilation = 0.00f;
    this->m_eTypeFlags = 0;
    this->m_eTransition = EReplayKeyTransition::Linear;
    this->m_eCameraMode = EReplayKeyCameraMode::Gameplay;
}

