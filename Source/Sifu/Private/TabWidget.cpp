#include "TabWidget.h"

uint8 UTabWidget::BPF_GetEnumValue() {
    return 0;
}

UTabWidget::UTabWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->m_uiEnumValue = 0;
}

