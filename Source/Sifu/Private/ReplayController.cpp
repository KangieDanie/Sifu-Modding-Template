#include "ReplayController.h"

class UCurveFloat;
class AReplayVideoRecorder;
class UReplayKey;
class UReplayTimelineModel;
class UReplayMainUserWidget;
class UReplaySystem;
class UObject;
class UReplayFightingCharacterComponent;
class AReplayingCamera;
class UReplayCineCameraComponent;

void AReplayController::OnKeyMoved(UReplayKey* _key) {
}

void AReplayController::OnGoToTimeCompleted() {
}

bool AReplayController::IsReplaying() {
    return false;
}

bool AReplayController::IsRecording() {
    return false;
}

void AReplayController::GotoTimeInSeconds(float _fTime, bool _bUnselectKey) {
}

void AReplayController::BPF_StopVideoRecording() {
}

void AReplayController::BPF_StartVideoRecording(FReplayControllerOnVideoRecorderCreated _onVideoRecorderCreated) {
}

void AReplayController::BPF_StartSkipTimeToNextKeyFrameTask() {
}

UReplayMainUserWidget* AReplayController::BPF_SpawnMainUserWidget() {
    return NULL;
}

void AReplayController::BPF_SetDemoPlayTimeDilation(float _fValue) {
}

void AReplayController::BPF_SetCameraMode(EReplayCameraMode _eCameraMode) {
}

void AReplayController::BPF_ResetPreviousTimeDilation() const {
}

void AReplayController::BPF_LeaveReplay() {
}

bool AReplayController::BPF_IsRecordingVideo() const {
    return false;
}

UCurveFloat* AReplayController::BPF_GetTransitionProfile(EReplayKeyTransition _eTransitionType) const {
    return NULL;
}

UReplayTimelineModel* AReplayController::BPF_GetTimelineModel() const {
    return NULL;
}

float AReplayController::BPF_GetReplayTimeFromOffsetS(float _fOffset) {
    return 0.0f;
}

float AReplayController::BPF_GetReplayTimeFromOffsetMS(float _fOffset) {
    return 0.0f;
}

UReplaySystem* AReplayController::BPF_GetReplaySystem() {
    return NULL;
}

UReplayFightingCharacterComponent* AReplayController::BPF_GetReplayFightingCharacterComponent(const UObject* _worldContextObject) const {
    return NULL;
}

AReplayingCamera* AReplayController::BPF_GetReplayFightingCharacterCameraDummy(const UObject* _worldContextObject) const {
    return NULL;
}

UReplayCineCameraComponent* AReplayController::BPF_GetCurrentCineCameraComponent() const {
    return NULL;
}

UReplayCineCameraComponent* AReplayController::BPF_GetCineCameraComponent(EReplayCameraMode _eCameraMode) const {
    return NULL;
}





AReplayController::AReplayController() {
    this->m_TimelineController = NULL;
    this->m_fGoToTimeCompletedTimeS = 0.00f;
    this->m_bTimeDilationZeroedOnGoToTime = true;
    this->m_bDebugEnabled = true;
    this->m_eCurrentCameraMode = EReplayCameraMode::LockedVirtualCam;
    this->m_VirtualCameraClass = NULL;
    this->m_MainUserWidget = NULL;
    this->m_VirtualCamera = NULL;
    this->m_VideoRecorderClass = NULL;
    this->m_VideoRecorder = NULL;
}

