#include "ReplayUIModeUserWidget.h"

void UReplayUIModeUserWidget::BPE_OnLeaveMode_Implementation() {
}

void UReplayUIModeUserWidget::BPE_OnEnterMode_Implementation() {
}

UReplayUIModeUserWidget::UReplayUIModeUserWidget() {
    this->m_bAddToViewport = true;
    this->m_iZOrder = 0;
    this->m_bIsActive = false;
    this->m_bHandleInputWhenUINotVisible = false;
    this->m_bIsOverlay = true;
}

