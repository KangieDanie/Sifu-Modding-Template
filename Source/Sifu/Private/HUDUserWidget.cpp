#include "HUDUserWidget.h"

void UHUDUserWidget::BPF_UpdateHUDOffset() {
}


UHUDUserWidget::UHUDUserWidget() {
    this->m_bVisibleWithMenus = true;
    this->m_bSearchMenusInStack = false;
    this->m_bVisibleInTraining = true;
    this->m_bVisibleInTrainingOnly = false;
}

