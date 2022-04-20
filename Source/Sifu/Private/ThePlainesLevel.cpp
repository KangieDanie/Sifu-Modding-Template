#include "ThePlainesLevel.h"

class AActor;

void AThePlainesLevel::UnregisterFromSignificanceOnActorEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason) {
}

bool AThePlainesLevel::BPF_IsSoundStateContainedInSaved(const FString& _SoundState) const {
    return false;
}

void AThePlainesLevel::BPF_InitSoundState(const FString& _StateGroup, const FString& _state, bool _bReplicates, bool _bSaveGame) {
}





AThePlainesLevel::AThePlainesLevel() {
    this->m_BlenderManager = NULL;
    this->m_StartupSequence = NULL;
    this->m_bInChargeOfSoundSave = false;
}

