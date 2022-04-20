#include "ReplayTimelineWidget.h"

class UReplayKey;
class AReplayController;
class UReplayKeyWidget;

void UReplayTimelineWidget::OnKeyDataUpdated(UReplayKey* _key, const FReplayKeyData& _previousData) {
}

void UReplayTimelineWidget::OnKeyDataIndexUpdate(UReplayKey* _key, int32 _iPreviousIndex, EReplayKeyIndexUpdateReason _eReason) {
}

void UReplayTimelineWidget::BPF_SetZoom(float _fZoom) {
}

void UReplayTimelineWidget::BPF_KeyPropertyChanged(UReplayKey* _key) {
}

void UReplayTimelineWidget::BPF_Initialize(AReplayController* _controller) {
}

UReplayKeyWidget* UReplayTimelineWidget::BPF_GetWidget(const UReplayKey* _key) const {
    return NULL;
}

float UReplayTimelineWidget::BPF_GetTimelinePosition(float _fDilatedDemoTime) const {
    return 0.0f;
}

void UReplayTimelineWidget::BPF_GetKeyPositionOffsetOverrides(const UReplayKeyWidget* _keyWidget, float& _fOutTimeOffset, float& _fTimelinePositionOffset) const {
}

FVector2D UReplayTimelineWidget::BPF_GetKeyPosition(const UReplayKeyWidget* _keyWidget, bool _bOffsetKeySize, bool _bAddContainerPadding, bool& _bOutIsOutOfBounds, bool _bPreventKeyTypePositionOverride) const {
    return FVector2D{};
}

float UReplayTimelineWidget::BPF_GetCurrentTimelinePosition() const {
    return 0.0f;
}

UReplayKeyWidget* UReplayTimelineWidget::BPF_AddKey(UReplayKey* _key) {
    return NULL;
}

void UReplayTimelineWidget::BPE_RequestKeysDisplayUpdate_Implementation() {
}





void UReplayTimelineWidget::BPE_OnKeyPostDelete_Implementation(UReplayKey* _key) {
}

void UReplayTimelineWidget::BPE_OnKeyDilatedTimeRecalc_Implementation(int32 _iStartingIndex) {
}



UReplayTimelineWidget::UReplayTimelineWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->m_fZoom = 1.00f;
    this->m_fPreviewCursorAlphaTriggerUnzoom = 0.00f;
    this->m_KeysPanel = NULL;
    this->m_KeyWidgetClass = NULL;
    this->m_ReplayController = NULL;
}

