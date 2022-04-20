#include "SaveManagerBlueprintHelper.h"

class USCSaveObjectPlayerProfile;
class USaveManagerDelegateHandler;
class USCSaveObjectGameData;

FString USaveManagerBlueprintHelper::BPF_SwapSaveNameToAndFromBackup(const FString& _currentSaveName) {
    return TEXT("");
}

void USaveManagerBlueprintHelper::BPF_SetSaveSystemEnabled(bool _bEnabled) {
}

void USaveManagerBlueprintHelper::BPF_SetNeedLoadFirstSave() {
}

void USaveManagerBlueprintHelper::BPF_SetNeedLoad(const FString& _saveName) {
}

void USaveManagerBlueprintHelper::BPF_SetNeedCreateSaveGame(int32 _iSaveIndex) {
}

bool USaveManagerBlueprintHelper::BPF_IsUsingDebugSaveLevelInPIE() {
    return false;
}

bool USaveManagerBlueprintHelper::BPF_IsUsingDebugGameFlowInPie() {
    return false;
}

bool USaveManagerBlueprintHelper::BPF_IsSaveSystemEnabled() {
    return false;
}

FTimespan USaveManagerBlueprintHelper::BPF_GetTimePlayedInCurrentSave() {
    return FTimespan{};
}

USaveManagerDelegateHandler* USaveManagerBlueprintHelper::BPF_GetSaveManagerDelegateHandler() {
    return NULL;
}

FString USaveManagerBlueprintHelper::BPF_GetSaveBackupSuffix() {
    return TEXT("");
}

int32 USaveManagerBlueprintHelper::BPF_GetPlayerSavesCount(bool _bValidOnly) {
    return 0;
}

USCSaveObjectPlayerProfile* USaveManagerBlueprintHelper::BPF_GetCurrentSaveProfile() {
    return NULL;
}

USCSaveObjectGameData* USaveManagerBlueprintHelper::BPF_GetCurrentSaveGame() {
    return NULL;
}

FString USaveManagerBlueprintHelper::BPF_GenerateSaveNameFromIndex(int32 _iIndex) {
    return TEXT("");
}

int32 USaveManagerBlueprintHelper::BPF_GenerateIndexFromSaveName(const FString& _saveName) {
    return 0;
}

USaveManagerBlueprintHelper::USaveManagerBlueprintHelper() {
}

