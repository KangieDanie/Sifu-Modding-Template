#include "DebugMenu.h"

class UPanelWidget;
class ULoadSlot;

void UDebugMenu::BPF_ShowSaves(UPanelWidget* _boxToFill) {
}

void UDebugMenu::BPF_SetVBoxInvisible() {
}

void UDebugMenu::BPF_LoadEquipmentSelection() {
}

void UDebugMenu::BPF_LoadBackup(const FString& _backupName) {
}

void UDebugMenu::BPF_LoadAndSetFirstSave(ULoadSlot* _loadSlot) {
}

void UDebugMenu::BPF_DeleteBackup(const FString& _backupName) {
}

void UDebugMenu::BPF_CreateNewSave(const FString& _charaName) {
}

void UDebugMenu::BPF_CreateBackup(const FString& _backupName) {
}

UDebugMenu::UDebugMenu() {
    this->m_CharacterBuildPath = TEXT("/Game/DB/Characters/Builds");
    this->m_DummyCharcterBuild = NULL;
    this->m_CharacterBuildList = NULL;
    this->m_LoadingButtonClass = NULL;
}

