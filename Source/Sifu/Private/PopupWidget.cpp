#include "PopupWidget.h"

void UPopupWidget::OnMenuChanged(EMenuEnum _ePrevMenu, EMenuEnum _eNewMenu) {
}

void UPopupWidget::BPF_OnChoseB_Implementation() {
}

void UPopupWidget::BPF_OnChoseA_Implementation(int32 _playerID) {
}


bool UPopupWidget::BPE_IsUsingChoiceB_Implementation() const {
    return false;
}

bool UPopupWidget::BPE_IsUsingChoiceA_Implementation() const {
    return false;
}

UPopupWidget::UPopupWidget() {
    this->m_eValidateAction = InputAction::MenuAction;
    this->m_eCancelAction = InputAction::MenuCancel;
}

