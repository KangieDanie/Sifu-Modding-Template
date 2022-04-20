#include "CTM_LookAt.h"

class UCameraComponentThird;

FVector UCTM_LookAt::BPE_GetPositionToLook_Implementation(UCameraComponentThird* _cameraComponent) const {
    return FVector{};
}

bool UCTM_LookAt::BPE_CanLaunchLookAt_Implementation(UCameraComponentThird* _cameraComponent) const {
    return false;
}

UCTM_LookAt::UCTM_LookAt() {
}

