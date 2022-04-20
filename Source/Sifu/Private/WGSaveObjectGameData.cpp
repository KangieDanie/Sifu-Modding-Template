#include "WGSaveObjectGameData.h"

class USCSaveObjectGameData;

void UWGSaveObjectGameData::BPF_RemoveGameplayTag(FGameplayTag _gameplayTagToAdd) {
}

bool UWGSaveObjectGameData::BPF_HasGameplayTag(FGameplayTag _gameplayTagToAdd) {
    return false;
}

void UWGSaveObjectGameData::BPF_AddOrUpdateMaskSnapshot(int32 _iMask, const FDuplicatedSaveData& _duplicatedData) {
}

void UWGSaveObjectGameData::BPF_AddGameplayTag(FGameplayTag _gameplayTagToAdd) {
}

FString UWGSaveObjectGameData::BPE_SnapshotSaveMask_Implementation(int32 _iSaveMaskToBackup) {
    return TEXT("");
}


FString UWGSaveObjectGameData::BPE_OverrideSaveMaskWithSnapshot_Implementation(int32 _iSnapshotIdx) {
    return TEXT("");
}

int32 UWGSaveObjectGameData::BPE_GenerateGlobalAllowedSaveMask_Implementation() const {
    return 0;
}

void UWGSaveObjectGameData::BPE_CopyToSaveWithMask_Implementation(USCSaveObjectGameData* _inSaveTo, int32 _iTestMask) {
}

UWGSaveObjectGameData::UWGSaveObjectGameData() {
}

