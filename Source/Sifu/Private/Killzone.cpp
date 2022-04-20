#include "Killzone.h"

class UPrimitiveComponent;
class AActor;

void AKillzone::OnBoxTouched(UPrimitiveComponent* _OverlappedComp, AActor* _Other, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult) {
}

bool AKillzone::BPF_IsKillzoneActive_Implementation() {
    return false;
}


AKillzone::AKillzone() {
    this->m_BoxComponent = NULL;
}

