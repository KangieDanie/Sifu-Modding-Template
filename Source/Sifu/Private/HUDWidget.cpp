#include "HUDWidget.h"

void UHUDWidget::OnRegularAttack(EQuadrantTypes _eStartQuadrant, EQuadrantTypes _eEndQuadrant, uint8 _uiNewIndex) {
}

void UHUDWidget::OnComboEnd(EQuadrantTypes _eNewQuadrant) {
}

void UHUDWidget::OnComboChangeQuadrant(EQuadrantTypes _eNewQuadrant) {
}

void UHUDWidget::OnComboChangeNextImg(EQuadrantTypes _eNewQuadrant) {
}

void UHUDWidget::OnChangeQuadrantState(EQuadrantTypes _eNewQuadrant) {
}

void UHUDWidget::OnAltAttack(EQuadrantTypes _eNewQuadrant, uint8 _uiCurrentComboIndex) {
}

bool UHUDWidget::BPF_IsAttacking() const {
    return false;
}










UHUDWidget::UHUDWidget() {
    this->m_eCurrentQuadrant = EQuadrantTypes::None;
}

