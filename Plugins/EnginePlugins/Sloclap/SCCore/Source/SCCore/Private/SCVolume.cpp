#include "SCVolume.h"

class UPrimitiveComponent;
class AActor;

void ASCVolume::InternalOnComponentStartOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult) {
}

void ASCVolume::InternalOnComponentEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex) {
}

ASCVolume::ASCVolume() {
    this->m_ParentVolume = NULL;
}

