#include "ReplayMainUserWidget.h"

class UReplayKey;
class AActor;
class AReplayController;

bool UReplayMainUserWidget::OnTimelineModePressed() {
    return false;
}

void UReplayMainUserWidget::OnKeyRemoved(UReplayKey* _key) {
}

void UReplayMainUserWidget::OnKeyAdded(UReplayKey* _key, bool _bCanSelectKey) {
}

void UReplayMainUserWidget::BPF_ToggleTimelineMode() {
}

void UReplayMainUserWidget::BPF_ToggleEditCameraMode(bool _bApplyCameraPositionToSelectedKeyOnLeave, bool _bApplyLensSettingsToSelectedKeyOnLeave) {
}

void UReplayMainUserWidget::BPF_SetSelectedKeyLookAtTarget(const AActor* _actor) {
}

void UReplayMainUserWidget::BPF_SetSelectedKeyFollowTarget(const AActor* _actor) {
}

void UReplayMainUserWidget::BPF_SetInPreviewMode(bool _bInPreview) {
}

bool UReplayMainUserWidget::BPF_SelectPreviousKey() {
    return false;
}

bool UReplayMainUserWidget::BPF_SelectNextKey() {
    return false;
}

bool UReplayMainUserWidget::BPF_SelectKeyAndGoToTime(UReplayKey* _key) {
    return false;
}

bool UReplayMainUserWidget::BPF_SelectKey(UReplayKey* _key) {
    return false;
}

void UReplayMainUserWidget::BPF_ResetTimelineControlAndScrub() {
}

bool UReplayMainUserWidget::BPF_RemoveSelectedKeyCut() {
    return false;
}

bool UReplayMainUserWidget::BPF_RemoveSelectedKey() {
    return false;
}

void UReplayMainUserWidget::BPF_PasteKey() {
}

void UReplayMainUserWidget::BPF_NotifySelectedKeyTimeDilationUpdate() {
}

void UReplayMainUserWidget::BPF_NotifySelectedKeyCameraModeUpdated() {
}

void UReplayMainUserWidget::BPF_MoveTimelineCursor(ECycleDirection _eDirection, EReplayTimelineControlType _eControlType) {
}

void UReplayMainUserWidget::BPF_LeavePasteKeyMode() {
}

bool UReplayMainUserWidget::BPF_IsInKeyPastingMode() const {
    return false;
}

bool UReplayMainUserWidget::BPF_IsEditingKeyCameraPosition() const {
    return false;
}

bool UReplayMainUserWidget::BPF_HasSelectedOrHoveredKey() const {
    return false;
}

bool UReplayMainUserWidget::BPF_HasKeySelected() const {
    return false;
}

void UReplayMainUserWidget::BPF_GoToTime(UReplayKey* _key) {
}

UReplayKey* UReplayMainUserWidget::BPF_GetSelectedKey() const {
    return NULL;
}

AReplayController* UReplayMainUserWidget::BPF_GetReplayController() const {
    return NULL;
}

UReplayKey* UReplayMainUserWidget::BPF_GetKeyFromCurrentDemoTime(ECycleDirection _eDirection) const {
    return NULL;
}

bool UReplayMainUserWidget::BPF_GetIsMovingTimelineCursor() const {
    return false;
}

bool UReplayMainUserWidget::BPF_GetIsInPreviewMode() const {
    return false;
}

void UReplayMainUserWidget::BPF_CreateKeyWidgets() {
}

void UReplayMainUserWidget::BPF_CopySelectedKey() {
}

void UReplayMainUserWidget::BPF_ApplyCurrentCineCameraSettingsAndPositionToKey(UReplayKey* _key, bool _bApplyPosition, bool _bApplyLensSettings, bool _bApplyFocusSettings) {
}

UReplayKey* UReplayMainUserWidget::BPF_AddKeyAtCurrentTime(int32 _iTypeFlags, bool& _bOutKeyAlreadyExists) {
    return NULL;
}

void UReplayMainUserWidget::BPF_AddCutAtCurrentTime() {
}
























void UReplayMainUserWidget::BPE_OnGoToTimeInitiated_Implementation(bool _bUnselectKey) {
}

void UReplayMainUserWidget::BPE_OnGoToTimeCompleted_Implementation() {
}










UReplayMainUserWidget::UReplayMainUserWidget() {
    this->m_bUIInitialized = false;
    this->m_bAutoSelectKeyOnAdd = true;
    this->m_bSelectKeyOnGoToTimeCompleted = false;
    this->m_bOnSelectFailDefaultToSelectedKey = true;
    this->m_TimelineWidget = NULL;
}

