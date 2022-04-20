#include "IKProfileAnimNotifyState.h"

UIKProfileAnimNotifyState::UIKProfileAnimNotifyState() {
    this->m_bResetIKAlphaOnStop = true;
    this->m_bRotateImpactOrientation = false;
    this->m_bForceBoneRotation = false;
    this->m_fForceBoneRotationBlendDuration = 0.10f;
}

