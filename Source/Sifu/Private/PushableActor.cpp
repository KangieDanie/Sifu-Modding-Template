#include "PushableActor.h"

class AActor;
class AFightingCharacter;
class ASCPlayerController;

void APushableActor::BPF_SetPushableState(EPushableState _eNewState) {
}

void APushableActor::BPF_Push(const AFightingCharacter* _character) {
}

AActor* APushableActor::BPF_GetTarget(const AFightingCharacter* _character) const {
    return NULL;
}

EPushableState APushableActor::BPF_GetPushableState() const {
    return EPushableState::Stopped;
}

FVector2D APushableActor::BPF_GetLeftStickValues(ASCPlayerController* _playerController) const {
    return FVector2D{};
}

float APushableActor::BPF_AngleBetweenMoveInputAndObject(const AFightingCharacter* _character) const {
    return 0.0f;
}




APushableActor::APushableActor() {
    this->m_fFallingVelocityReduc = 2.00f;
    this->m_fUsabilityAngleRestriction = 90.00f;
}

