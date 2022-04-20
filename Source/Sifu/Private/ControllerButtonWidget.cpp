#include "ControllerButtonWidget.h"

class UGenericInputData;
class UTexture2D;

void UControllerButtonWidget::BPF_SetMappingID(const FMappingID& _mappingID, bool _bRefresh) {
}

void UControllerButtonWidget::BPF_SetInputSlotIndex(int32 _iSlotIndex) {
}

void UControllerButtonWidget::BPF_SetInputDatas(TArray<UGenericInputData*> _InputDatas) {
}

void UControllerButtonWidget::BPF_SetInputData(UGenericInputData* _InputData) {
}

void UControllerButtonWidget::BPF_SetIconStyle(EControllerIconStyles _eIconStyle, bool _bRefresh) {
}

void UControllerButtonWidget::BPF_SetAxisType(EControllerIconAxisTypes _eAxisType, bool _bRefresh) {
}

void UControllerButtonWidget::BPF_SetAction(InputAction _eAction, bool _bRefresh) {
}

bool UControllerButtonWidget::BPF_IsKeyboardInput() {
    return false;
}

void UControllerButtonWidget::BPF_GetUIKeyInfos(bool& _bOutFoundIcon, FInputMappingNode& _outNode, TSoftObjectPtr<UTexture2D>& _icon, FKey& _key, FText& _replacementText, bool& _bShowText, FString& _outSeparator) {
}

FText UControllerButtonWidget::BPF_GetKeyDisplayName(const FKey& _key) {
    return FText::GetEmpty();
}

void UControllerButtonWidget::BPF_GetInputNode(FInputMappingNode& Node) {
}

UControllerButtonWidget::UControllerButtonWidget() {
    this->m_iInputSlotIndex = 0;
    this->m_eInputContext = InputContext::Invalid;
    this->m_eAxisType = EControllerIconAxisTypes::HorizontalAndVertical;
    this->m_bUpdateOnControllerTypeChanged = true;
    this->m_IconStyle = EControllerIconStyles::Small;
    this->m_eAction = InputAction::None;
}

