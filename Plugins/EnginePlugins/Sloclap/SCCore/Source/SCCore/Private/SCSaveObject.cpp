#include "SCSaveObject.h"

class UTexture2D;

FString USCSaveObject::BPE_GetSubtitlesInfoForSaveFile_Implementation() const {
    return TEXT("");
}

UTexture2D* USCSaveObject::BPE_GetIconForSaveFile_Implementation() const {
    return NULL;
}

FString USCSaveObject::BPE_GetDetailsInfoForSaveFile_Implementation() const {
    return TEXT("");
}

void USCSaveObject::BPE_FillSaveWithDefaultValues_Implementation() {
}

USCSaveObject::USCSaveObject() {
    this->m_SaveFilename = TEXT("Default");
    this->m_uiVersion = 4294967295;
}

