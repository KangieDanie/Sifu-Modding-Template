#include "WGGameFlow.h"

void UWGGameFlow::TravelToPendingMapInternal(bool _bSaveBefore, int32 _iSnapshotToOverrideFrom, bool _bDeleteWorldStateSave, bool _bReloadFirstSaveBefore, int32 _iPartOfSaveToResetMask) {
}

void UWGGameFlow::OnControllerReconnectConfirm() {
}

void UWGGameFlow::BPF_TravelToPendingMap(bool _bSaveBefore, int32 _iSnapshotToOverrideFrom, bool _bDeleteWorldStateSave, bool _bReloadFirstSaveBefore, int32 _iPartOfSaveToResetMask, float _fFadeDuration) {
}

void UWGGameFlow::BPF_RestartCurrentMap() {
}

void UWGGameFlow::BPF_ResetTags() {
}

void UWGGameFlow::BPF_RaiseTag(FGameplayTag _tagToRaise) {
}

void UWGGameFlow::BPF_LoadNextMap(bool _bForceClassicTravel) {
}

bool UWGGameFlow::BPF_IsPendingTravel() {
    return false;
}

void UWGGameFlow::BPF_GoToNextMap(bool _bSaveBefore) {
}

bool UWGGameFlow::BPF_GotoMap(FName _mapTag, FGameplayTagContainer _specificMapOptions, bool _bSaveBefore, int32 _iSnapshotToOverrideFrom, bool _bDeleteWorldStateSave, EMenuEnum _eMenuToShow, bool _bReloadFirstSaveBefore, int32 _iPartOfSaveToResetMask) {
    return false;
}

FName UWGGameFlow::BPF_GetFirstPlayableMapTagName() const {
    return NAME_None;
}

FName UWGGameFlow::BPF_GetCurrentMapTag() const {
    return NAME_None;
}

UWGGameFlow::UWGGameFlow() {
}

