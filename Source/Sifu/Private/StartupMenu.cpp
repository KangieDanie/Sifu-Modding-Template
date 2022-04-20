#include "StartupMenu.h"

class AActor;

void UStartupMenu::OnSequenceFinished() {
}

void UStartupMenu::OnContinueWithoutSavingConfirm() {
}

void UStartupMenu::OnConfirmGeneric() {
}

void UStartupMenu::OnConfirmCancel() {
}

void UStartupMenu::BPF_SetCanLaunchDirectly(bool _bLaunchDirectly) {
}

void UStartupMenu::BPF_NewGame() {
}

bool UStartupMenu::BPF_IsCameraShakeNeeded() const {
    return false;
}

bool UStartupMenu::BPF_HasSaveGames() {
    return false;
}

AActor* UStartupMenu::BPF_GetStartSpot() const {
    return NULL;
}

EPlayerScreenSide UStartupMenu::BPF_GetPlayerScreenSide() const {
    return EPlayerScreenSide::Left;
}

void UStartupMenu::BPF_ContinueGame() {
}

bool UStartupMenu::BPF_CanLaunchDirectly(bool _bLaunchDirectly) const {
    return false;
}







UStartupMenu::UStartupMenu() {
    this->m_eCurrentState = EStartupMenuState::IIS;
    this->m_eEnumType = EMenuEnum::StartupMenu;
    this->m_iShowPopupOnLoadResultMask = -1;
}

