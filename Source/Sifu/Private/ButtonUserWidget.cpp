#include "ButtonUserWidget.h"

void UButtonUserWidget::BPF_SetSelected(bool _bSelected, bool _bForce) {
}

bool UButtonUserWidget::BPF_IsActionEnabled(const FButtonAction& _action) const {
    return false;
}

bool UButtonUserWidget::BPF_GetIsSelected() {
    return false;
}

float UButtonUserWidget::BPF_GetHoldProgress() const {
    return 0.0f;
}






UButtonUserWidget::UButtonUserWidget() {
    this->m_bUseFocusStateBrush = false;
    this->m_eClickMethod = EButtonClickMethod::DownAndUp;
    this->m_fHoldDuration = 0.00f;
    this->m_bFocusOnVisible = false;
    this->m_bUseCustomNavigation = false;
    this->m_bIsClickable = true;
    this->m_bFocusOnMouseOver = false;
    this->m_bLoseFocusOnMouseLeave = true;
    this->m_bSelectOnClick = false;
    this->m_bSelectOnNavigationFocus = false;
    this->m_eSelectedVisibility = ESlateVisibility::Collapsed;
    this->m_eDeselectedVisibility = ESlateVisibility::SelfHitTestInvisible;
    this->m_eMouseOverVisibility = ESlateVisibility::Collapsed;
    this->m_eMouseOutVisibility = ESlateVisibility::SelfHitTestInvisible;
    this->m_bIsSelected = false;
    this->m_bPlayClickSound = true;
    this->m_bPlayRightClickSound = false;
    this->m_bIsMouseOver = false;
    this->m_bIsMouseDown = false;
}

