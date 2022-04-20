#include "OverTimeCameraMixerBlender.h"

class UCurveFloat;

float UOverTimeCameraMixerBlender::GetCoeff() const {
    return 0.0f;
}

void UOverTimeCameraMixerBlender::BlendWithStarting(float _fTarget, float _fDelay, float _fStarting, ESCBlendType _eBlendType, UCurveFloat* _blendCurve) const {
}

void UOverTimeCameraMixerBlender::Blend(float _fTarget, float _fDelay, ESCBlendType _eBlendType, UCurveFloat* _blendCurve) const {
}

UOverTimeCameraMixerBlender::UOverTimeCameraMixerBlender() {
}

