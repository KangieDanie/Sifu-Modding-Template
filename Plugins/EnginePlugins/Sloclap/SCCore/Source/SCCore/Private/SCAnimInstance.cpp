#include "SCAnimInstance.h"

class UPoseAsset;
class UCurveFloat;

FTransform USCAnimInstance::GetSavedTransform(FName _savedBone) const {
    return FTransform{};
}

bool USCAnimInstance::BPF_IsInPreview() const {
    return false;
}

UPoseAsset* USCAnimInstance::BPF_GetCurrentPoseAsset() const {
    return NULL;
}

void USCAnimInstance::BPF_BlendCinematicLayer(ECinematicLayerTypes _eLayerToBlendOut, float _fTargettedValue, float _fDuration, ESCBlendType _eBlendType, UCurveFloat* _blendCurve) {
}





USCAnimInstance::USCAnimInstance() {
    this->m_fCinematicOverallWeight = 0.00f;
    this->m_fCinematicLayerTypesCursor = 0.00f;
    this->m_fPreviewCinematicLayerTypesCursor = 0.00f;
    this->m_MirrorAnimDB = NULL;
    this->m_CachedCurrentPoseAsset = NULL;
    this->m_bIsInCinematic = false;
}

