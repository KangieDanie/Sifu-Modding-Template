#include "GraphOptionsMenu.h"

void UGraphOptionsMenu::OnRequestUIChange() {
}

void UGraphOptionsMenu::BPF_ResolutionChanged(int32 _iIndex) {
}

int32 UGraphOptionsMenu::BPF_GetCurrentDisplayMode() {
    return 0;
}

void UGraphOptionsMenu::BPF_AutoDetectSettings() {
}

void UGraphOptionsMenu::BPF_AcceptSetting() {
}

UGraphOptionsMenu::UGraphOptionsMenu() {
    this->m_iCurrentResIndex = -1;
    this->m_bSetCameraInStartIdlePosition = false;
}

