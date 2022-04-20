#include "LockableDoor.h"

class UAnimationAsset;
class APawn;
class AFightingCharacter;

void ALockableDoor::SetOpened(bool bOpened) {
}

void ALockableDoor::SetLocked(bool bLocked) {
}

void ALockableDoor::BPF_SetNonOccluding(bool bNonOccluding) {
}

void ALockableDoor::BPF_SetDoorInOpenedState(UAnimationAsset* _openingAnimAsset) {
}

void ALockableDoor::BPF_ReplayRecordObjectInteraction_Implementation(APawn* _Instigator, FName _way) {
}


void ALockableDoor::BPF_RemoveNavBuildLock() {
}

void ALockableDoor::BPF_OpenDoor(AFightingCharacter* _interactor, UAnimationAsset* _openingAnimAsset, UAnimationAsset* _closingAnimAsset) {
}

void ALockableDoor::BPF_CloseDoor() {
}

void ALockableDoor::BPF_AddNavBuildLock() {
}






ALockableDoor::ALockableDoor() {
    this->m_fCloseDistThreshold = 500.00f;
    this->m_bShouldStayOpen = false;
    this->m_levelSequenceWay1 = NULL;
    this->m_levelSequenceWay2 = NULL;
    this->m_bCanLockNavBuild = true;
    this->m_bLocked = false;
    this->m_bOpened = false;
}

