#include "CameraComponentThird.h"
#include "Net/UnrealNetwork.h"

class UBlackboardComponent;
class UAbstractCameraData;
class AActor;

void UCameraComponentThird::BPF_UpdateCachedTargets() {
}

void UCameraComponentThird::BPF_UnPauseLookAt(int32 _iHandle) {
}

void UCameraComponentThird::BPF_UnFreezeMirrorServices(int32 _iHandle) {
}

void UCameraComponentThird::BPF_UnFreezeLockService(int32 _iHandle) {
}

void UCameraComponentThird::BPF_UnFreezeHidingZoneRepulsion(int32 _iHandle) {
}

FVector UCameraComponentThird::BPF_TransformInputVector(FVector2D _vInputVector) const {
    return FVector{};
}

void UCameraComponentThird::BPF_SetSlowMotionFactor(float _fSlowMotionFactor) {
}

void UCameraComponentThird::BPF_SetMirrorCursorValue(float _fValue) {
}

void UCameraComponentThird::BPF_SetIsCameraLDMode(bool _bCameraLDMode) {
}

void UCameraComponentThird::BPF_SetDialogAspectRatio(bool _bInEnabled) {
}

void UCameraComponentThird::BPF_ResetLockManualCooldownToDefault() {
}

void UCameraComponentThird::BPF_ResetCameraRepulsionConfig() {
}

void UCameraComponentThird::BPF_ResetCameraDataToDefault(UAbstractCameraData* _cameraDataToReset) {
}

void UCameraComponentThird::BPF_Reset1vNLockBehaviorToDefault() {
}

void UCameraComponentThird::BPF_Reset1v1LockBehaviorToDefault() {
}

void UCameraComponentThird::BPF_RemoveLookAt(int32 _iHandle) {
}

void UCameraComponentThird::BPF_RemoveAllLookAt() {
}

int32 UCameraComponentThird::BPF_PauseLookAtWithHandle(const FString& _contextString) {
    return 0;
}

void UCameraComponentThird::BPF_PauseLookAt(float _fDuration, const FString& _contextString) {
}

void UCameraComponentThird::BPF_OverrideLockManualCooldown(float _fNewCooldown) {
}

void UCameraComponentThird::BPF_OverrideCameraRepulsionConfig(const FCameraRepulsionConfig& _newConfig) {
}

void UCameraComponentThird::BPF_OverrideCameraData(UAbstractCameraData* _cameraDataToOverride, UAbstractCameraData* _newCameraDataToUse) {
}

void UCameraComponentThird::BPF_Override1vNLockBehavior(const FCameraLookAtServiceBehaviorTime& _timeConfig, const FCameraLookAtServiceBehaviorConfig& _behaviorConfig) {
}

void UCameraComponentThird::BPF_Override1v1LockBehavior(const FCameraLookAtServiceBehaviorTime& _timeConfig, const FCameraLookAtServiceBehaviorConfig& _behaviorConfig) {
}

void UCameraComponentThird::BPF_LaunchNewMirrorTarget(const FCameraMirrorManagementConfig& _newMirrorTarget) {
}

bool UCameraComponentThird::BPF_IsWorldLocationInFront(const FVector& _vLocation) const {
    return false;
}

bool UCameraComponentThird::BPF_IsSleepingFromManualInput() const {
    return false;
}

bool UCameraComponentThird::BPF_IsLookAtActive(int32 _iHandle) const {
    return false;
}

bool UCameraComponentThird::BPF_IsLockAlgoActiveAndRunning(ECameraLockAlgorithms _eAlgo) const {
    return false;
}

bool UCameraComponentThird::BPF_IsLockActiveAndRunning() const {
    return false;
}

bool UCameraComponentThird::BPF_IsInCinematic() const {
    return false;
}

bool UCameraComponentThird::BPF_IsCurrentCameraAllowingLookAtCollisionExtraction() const {
    return false;
}

bool UCameraComponentThird::BPF_IsCurrentCameraAllowingDodgeMirrorChange() const {
    return false;
}

bool UCameraComponentThird::BPF_IsColliding() const {
    return false;
}

bool UCameraComponentThird::BPF_HasLookAt() const {
    return false;
}

void UCameraComponentThird::BPF_GetValidTarget(bool _bIncludeAllPotentialAlertedTarget, TArray<AActor*>& _arrayOfTarget) const {
}

float UCameraComponentThird::BPF_GetTimeSinceNoInput() const {
    return 0.0f;
}

int32 UCameraComponentThird::BPF_GetNumberOfValidTarget(bool _bIncludeAllPotentialAlertedTarget) const {
    return 0;
}

FVector UCameraComponentThird::BPF_GetNearestColDirection() const {
    return FVector{};
}

void UCameraComponentThird::BPF_GetMirrorFarTargettedPosition(TArray<FCameraTargetPosition>& _outTargetPosition) const {
}

float UCameraComponentThird::BPF_GetMirrorCursorValue() const {
    return 0.0f;
}

float UCameraComponentThird::BPF_GetCurrentLookAtRatio() const {
    return 0.0f;
}

ESCSequenceBlendViewState UCameraComponentThird::BPF_GetCurrentCinematicState() const {
    return ESCSequenceBlendViewState::ToSequence;
}

float UCameraComponentThird::BPF_GetCollisionMinDist() const {
    return 0.0f;
}

FTransform UCameraComponentThird::BPF_GetCameraTransform() const {
    return FTransform{};
}

float UCameraComponentThird::BPF_GetCameraShakeFactor() {
    return 0.0f;
}

float UCameraComponentThird::BPF_GetCameraCollisionTargetRatio() const {
    return 0.0f;
}

float UCameraComponentThird::BPF_GetCameraCollisionRatio() const {
    return 0.0f;
}

UBlackboardComponent* UCameraComponentThird::BPF_GetBlackBoardComponent() const {
    return NULL;
}

int32 UCameraComponentThird::BPF_FreezeMirrorServices(const FString& _contextString) {
    return 0;
}

int32 UCameraComponentThird::BPF_FreezeLockService(const FString& _contextString) {
    return 0;
}

int32 UCameraComponentThird::BPF_FreezeHidingZoneRepulsion(const FString& _contextString) {
    return 0;
}

bool UCameraComponentThird::BPF_ComputeIsMirrorFromCharacterPosOnScreen() const {
    return false;
}

void UCameraComponentThird::BPF_AddLookAt(const FCameraLookAtServiceBehavior& _newLookAt, int32& _iHandle) {
}

void UCameraComponentThird::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCameraComponentThird, m_bCameraLDMode);
}

UCameraComponentThird::UCameraComponentThird() {
    this->m_sActualLagParameters = NULL;
    this->m_CameraDB = NULL;
    this->m_fMouseYawScale = 2.50f;
    this->m_fMousePitchScale = 1.75f;
    this->m_MaterialParameterCollectionCameraDither = NULL;
    this->m_fDialogAspectRatio = 2.33f;
    this->m_fDialogAspectRatioBlendDuration = 0.50f;
    this->m_eDialogAspectRatioBlendType = ESCBlendType::Linear;
    this->m_bCameraLDMode = false;
}

