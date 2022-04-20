#include "SpringCameraMixerBlender.h"

class UCameraComponentThird;

float USpringCameraMixerBlender::BPE_GetTargetRatio_Implementation(UCameraComponentThird* _camera) const {
    return 0.0f;
}

float USpringCameraMixerBlender::BPE_GetSpeedFactor_Implementation(UCameraComponentThird* _camera, float _fTargetRatio, float _fOldRatio) const {
    return 0.0f;
}

USpringCameraMixerBlender::USpringCameraMixerBlender() {
    this->m_fSpeedFactor = 2.00f;
}

