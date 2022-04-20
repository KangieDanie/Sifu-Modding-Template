#include "MenuDB.h"

class UTexture2D;

UTexture2D* UMenuDB::BPF_GetStanceIcon(EQuadrantTypes _eQuadrant, EIconStyle _eIconStyle) const {
    return NULL;
}

UTexture2D* UMenuDB::BPF_GetQuadrantSelectionIcon(EQuadrantTypes _eQuadrant) const {
    return NULL;
}

UTexture2D* UMenuDB::BPF_GetQuadrantIcon(EQuadrantTypes _eQuadrant, EIconStyle _eIconStyle) const {
    return NULL;
}

void UMenuDB::BPF_GetGameModeInfos(const EGameModeTypes _eGameMode, FEquipmentCategoryInfos& _outInfos) const {
}

FString UMenuDB::BPF_GetControllerKeyIconDesc(const FControllerKeyIcons& _slot) {
    return TEXT("");
}

FString UMenuDB::BPF_GetControllerIconsDesc(const FControllerIcons& _icons) {
    return TEXT("");
}

FString UMenuDB::BPF_GetControllerAxisIconDesc(const FControllerAxisIcons& _slot) {
    return TEXT("");
}

TSoftObjectPtr<UTexture2D> UMenuDB::BPF_GetAttackParryIcon(EParrySide _eParrySide) const {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UMenuDB::BPF_GetAttackAvoidIcon(EAvoidType _eAvoidType) const {
    return NULL;
}

UMenuDB::UMenuDB() {
   /* this->m_AudioMove = NULL;
    this->m_AudioValidate = NULL;
    this->m_AudioBack = NULL;*/
    this->m_QuadrantSelectionIcons[0] = NULL;
    this->m_QuadrantSelectionIcons[1] = NULL;
    this->m_QuadrantSelectionIcons[2] = NULL;
    this->m_QuadrantSelectionIcons[3] = NULL;
}

