#include "ReplayMenuWidget.h"
#include "Templates/SubclassOf.h"

class UReplaySubMenuWidget;
class UReplayUIModeUserWidget;

void UReplayMenuWidget::BPF_RestoreOverlay() {
}

bool UReplayMenuWidget::BPF_PushSubMenu(UReplaySubMenuWidget* _subMenu) {
    return false;
}

bool UReplayMenuWidget::BPF_PopSubMenuIfTop(const UReplaySubMenuWidget* _subMenu) {
    return false;
}

UReplaySubMenuWidget* UReplayMenuWidget::BPF_PopSubMenu() {
    return NULL;
}

UReplaySubMenuWidget* UReplayMenuWidget::BPF_PeekSubMenu() const {
    return NULL;
}

void UReplayMenuWidget::BPF_LeaveCurrentUIMode() {
}

bool UReplayMenuWidget::BPF_IsSubMenuOnTop(const UReplaySubMenuWidget* _subMenu) const {
    return false;
}

bool UReplayMenuWidget::BPF_IsSubMenuOnStack(const UReplaySubMenuWidget* _subMenu) const {
    return false;
}

UReplayUIModeUserWidget* UReplayMenuWidget::BPF_GetNextOverlay() const {
    return NULL;
}

UReplayUIModeUserWidget* UReplayMenuWidget::BPF_GetCurrentUIMode() const {
    return NULL;
}

void UReplayMenuWidget::BPF_EnterUIMode(TSubclassOf<UReplayUIModeUserWidget> _UIModeClass) {
}

void UReplayMenuWidget::BPF_CycleUIOverlay() {
}

void UReplayMenuWidget::BPF_CloseAllSubMenu() {
}


void UReplayMenuWidget::BPE_OnRemovedFromParent_Implementation() {
}





bool UReplayMenuWidget::BPE_OnHideUIPressed_Implementation() {
    return false;
}







UReplayMenuWidget::UReplayMenuWidget() {
    this->m_ScreenshotWidgetClass = NULL;
    this->m_HideUIModeClass = NULL;
    this->m_ScreenshotWidget = NULL;
    this->m_UIModeDB = NULL;
    this->m_Controller = NULL;
    this->m_bUpdateUIModeOnMenuPushed = true;
}

