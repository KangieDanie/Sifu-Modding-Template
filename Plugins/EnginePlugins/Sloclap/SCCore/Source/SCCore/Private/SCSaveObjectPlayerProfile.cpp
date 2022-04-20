#include "SCSaveObjectPlayerProfile.h"

void USCSaveObjectPlayerProfile::BPF_RemoveSave(const FString& _saveName) {
}

bool USCSaveObjectPlayerProfile::BPF_IsSaveValid(const FString& _saveName, bool _bTreatBackup) const {
    return false;
}

FCharacterSaveDescription USCSaveObjectPlayerProfile::BPF_FindSaveByFileName(const FString& _fileName, bool& _bFound) const {
    return FCharacterSaveDescription{};
}

USCSaveObjectPlayerProfile::USCSaveObjectPlayerProfile() {
}

