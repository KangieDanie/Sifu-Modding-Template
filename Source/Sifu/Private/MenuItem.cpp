#include "MenuItem.h"

class UWidget;

void UMenuItem::BPE_OnChangeNextWidget_Implementation(UWidget* _widgetToHide, UWidget* _previousWidget, UWidget* _widgetToFocusOnCancel) {
}


void UMenuItem::BPE_OnCancelChangeWidget_Implementation() {
}

UMenuItem::UMenuItem() {
    this->m_PreviousWidget = NULL;
    this->m_WidgetToFocusOnCancel = NULL;
    this->m_NextPanel = NULL;
    this->m_bAllowSoundPlaying = false;
}

