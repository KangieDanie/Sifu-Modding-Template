#include "AimingBillboardActor.h"

class AActor;

float AAimingBillboardActor::BPF_GetScore() const {
    return 0.0f;
}

AActor* AAimingBillboardActor::BPF_GetActorOwner() const {
    return NULL;
}

FVector2D AAimingBillboardActor::BPE_ComputeSize_Implementation() const {
    return FVector2D{};
}

float AAimingBillboardActor::BPE_ComputeScore_Implementation(FVector _v3DPointToTest) const {
    return 0.0f;
}

AAimingBillboardActor::AAimingBillboardActor() {
    this->m_bDebug = false;
}

