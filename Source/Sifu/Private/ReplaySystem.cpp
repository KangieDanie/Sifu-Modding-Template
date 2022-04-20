#include "ReplaySystem.h"

class AActor;
class AFightingCharacter;
class UDemoNetDriver;
class UObject;
class UReplaySystem;
class AReplayController;

void UReplaySystem::BPF_StopRecording() {
}

void UReplaySystem::BPF_StartReplay() {
}

void UReplaySystem::BPF_StartRecording() {
}

void UReplaySystem::BPF_SetPlayingPlayerCharacter(AFightingCharacter* _character, const UObject* _worldContextObject) {
}

void UReplaySystem::BPF_SaveReplayToGameSlot() {
}

void UReplaySystem::BPF_ResumeRecording() {
}

void UReplaySystem::BPF_ReplayStopRecording(const UObject* _worldContextObject) {
}

void UReplaySystem::BPF_ReplayStartRecording(const UObject* _worldContextObject) {
}

void UReplaySystem::BPF_ReplayStartPlaying(const UObject* _worldContextObject) {
}

void UReplaySystem::BPF_ReadReplayFromGameSlot() {
}

void UReplaySystem::BPF_PauseRecording() {
}

bool UReplaySystem::BPF_IsRecording(const UObject* _worldContextObject) {
    return false;
}

bool UReplaySystem::BPF_IsPlaying(const UObject* _worldContextObject) {
    return false;
}

bool UReplaySystem::BPF_IsDemoPlayPaused(const UObject* _worldContextObject) {
    return false;
}

float UReplaySystem::BPF_GetVislogGameplayTimeS() const {
    return 0.0f;
}

float UReplaySystem::BPF_GetSnappedDemoTime(float _fDemoTimeS, bool _bCheckClosestFrame) {
    return 0.0f;
}

UReplaySystem* UReplaySystem::BPF_GetReplaySystem(const UObject* _worldContextObject) {
    return NULL;
}

AReplayController* UReplaySystem::BPF_GetReplayController(const UObject* _worldContextObject) {
    return NULL;
}

AFightingCharacter* UReplaySystem::BPF_GetPlayingPlayerCharacter(const UObject* _worldContextObject) {
    return NULL;
}

int32 UReplaySystem::BPF_GetKeyFrameIndexFromDemoTime(float _fDemoTimeS, bool _bCheckClosestFrame) {
    return 0;
}

float UReplaySystem::BPF_GetDemoTimeFromKeyFrameIndex(int32 _iKeyFrameIndex) {
    return 0.0f;
}

float UReplaySystem::BPF_GetDemoPlayTimeDilation(const UObject* _worldContextObject) {
    return 0.0f;
}

UDemoNetDriver* UReplaySystem::BPF_GetDemoNetDriver(const UObject* _worldContextObject) {
    return NULL;
}

float UReplaySystem::BPF_GetCurrentReplayLengthS(const UObject* _worldContextObject) {
    return 0.0f;
}

float UReplaySystem::BPF_GetCurrentReplayLengthMS(const UObject* _worldContextObject) {
    return 0.0f;
}

float UReplaySystem::BPF_GetCurrentDemoTimeS(const UObject* _worldContextObject) {
    return 0.0f;
}

float UReplaySystem::BPF_GetActorLastReplicationTime(AActor* _actor) {
    return 0.0f;
}

UReplaySystem::UReplaySystem() {
    this->m_bTimeDilationReplicated = false;
    this->m_bPauserPlayerStateReplicated = false;
    this->m_GameInstance = NULL;
    this->m_fReplayStartVislogTimeS = 0.00f;
}

