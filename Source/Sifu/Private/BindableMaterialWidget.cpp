#include "BindableMaterialWidget.h"

class UMaterialInstanceDynamic;

void UBindableMaterialWidget::BPF_SetMaterialInstance(UMaterialInstanceDynamic* _materialInstance) {
}

UBindableMaterialWidget::UBindableMaterialWidget() {
    this->m_MaterialInstance = NULL;
    this->FloatValue = 0.00f;
}

