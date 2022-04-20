#include "ReplayHelperLibrary.h"

class ABaseWeapon;
class ABaseReplayController;
class ASCPlayerController;

void UReplayHelperLibrary::BPF_SetScreenMessagesEnabled(bool _bEnabled) {
}

void UReplayHelperLibrary::BPF_SaveFilterPreset(int32 _iSlot, const FFilterProperties& _inProperties, ABaseReplayController* _controller) {
}

FFilterProperties UReplayHelperLibrary::BPF_LoadFilterPreset(int32 _iSlot, bool& _bIsValid) {
    return FFilterProperties{};
}

bool UReplayHelperLibrary::BPF_IsAvailabilityLayerPushed(const FAvailabilityLayerCache& _inALCache) {
    return false;
}

bool UReplayHelperLibrary::BPF_HasEntitlement(const ASCPlayerController* _controller, const FName& _entitlement) {
    return false;
}

void UReplayHelperLibrary::BPF_GetAnimSequences(TArray<FAnimSequenceDBEntry>& _outSequencesDB, const FAnimSequenceDBCache& _sequencesCache, const ABaseWeapon* _weapon) {
}

bool UReplayHelperLibrary::BPF_FilterPresetComparison(const FFilterProperties& _first, const FFilterProperties& _second) {
    return false;
}

bool UReplayHelperLibrary::BPF_AreScreenMessagesEnabled() {
    return false;
}

bool UReplayHelperLibrary::BPF_AreAvailabilityLayersPushed(const FAvailabilityLayerCaches& _inALCaches) {
    return false;
}

UReplayHelperLibrary::UReplayHelperLibrary() {
}

