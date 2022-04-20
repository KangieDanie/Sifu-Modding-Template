#include "CTM_PauseLookAt.h"

class UCameraComponentThird;

bool UCTM_PauseLookAt::BPE_CanLaunchPauseLookAt_Implementation(UCameraComponentThird* _cameraComponent) const {
    return false;
}

UCTM_PauseLookAt::UCTM_PauseLookAt() {
}

