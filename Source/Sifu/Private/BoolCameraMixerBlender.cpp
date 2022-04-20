#include "BoolCameraMixerBlender.h"

class UCameraComponentThird;

bool UBoolCameraMixerBlender::GetOldValue() const {
    return false;
}

bool UBoolCameraMixerBlender::BPE_GetBool_Implementation(UCameraComponentThird* _camera, bool _bNoDamping) const {
    return false;
}

UBoolCameraMixerBlender::UBoolCameraMixerBlender() {
    this->m_bInversed = false;
    this->m_fDuration = 0.20f;
    this->m_eBlendType = ESCBlendType::Linear;
    this->m_Curve = NULL;
    this->m_bConstantSpeed = false;
}

