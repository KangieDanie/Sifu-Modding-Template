#include "ThePlainesGameInstance.h"
#include "PredictionManager.h"

class USCLocalPlayer;
class ALevelSequenceActor;
class UReplaySystem;
class ASCPlayerStart;
class ULocalPlayer;
class UWGGameFlow;

void UThePlainesGameInstance::TriggerTakeKinectResources(bool _bTake) {
}

void UThePlainesGameInstance::TriggerResetGameFlowTags() {
}

void UThePlainesGameInstance::TriggerReloadConfig() {
}

void UThePlainesGameInstance::TriggerRaiseGameFlowTag(FName _gameplayTag) {
}

void UThePlainesGameInstance::TriggerCrashAfterDelay(int32 _iDelay) {
}

void UThePlainesGameInstance::TriggerAchievementProgress(const FString& _achievementID, float _fCompletionPercent) {
}

void UThePlainesGameInstance::TravelToNextMap() {
}

void UThePlainesGameInstance::TravelToLoadedMap(const FString& _sMapToTravelTo) {
}

void UThePlainesGameInstance::Replay_Stop() {
}

void UThePlainesGameInstance::Replay_Start() {
}

void UThePlainesGameInstance::Replay_Play() {
}

void UThePlainesGameInstance::Logout(int32 _index) {
}

void UThePlainesGameInstance::LoadMapAsync(const FString& _sPackageName) {
}

void UThePlainesGameInstance::GoToNextMap() {
}

void UThePlainesGameInstance::GoToMapInGameFlow(const FString& _sMapToTravelTo) {
}

USCLocalPlayer* UThePlainesGameInstance::GetLocalPlayer() {
    return NULL;
}

void UThePlainesGameInstance::DumpWorlds() {
}

void UThePlainesGameInstance::DumpLoadedLevels() {
}

void UThePlainesGameInstance::BPF_StopSequence(ALevelSequenceActor* _levelSequenceActor) {
}

void UThePlainesGameInstance::BPF_SetLoadingScreenTickTime(float _fNewTime) {
}

void UThePlainesGameInstance::BPF_SetDebugFlow(bool _bDebugFlow) {
}

void UThePlainesGameInstance::BPF_ResetNextMapTags() {
}

//void UThePlainesGameInstance::BPF_RaiseNextMapTags(FGameplayTag _tagToRaise) {
//}

void UThePlainesGameInstance::BPF_RaiseError(const FSCError& _error) {
}

void UThePlainesGameInstance::BPF_PlaySequence(ALevelSequenceActor* _levelSequenceActor, bool _bHideLoadingScreen) {
}

bool UThePlainesGameInstance::BPF_IsDebugFlow() const {
    return false;
}

bool UThePlainesGameInstance::BPF_IsCultureHasBeenSet() {
    return false;
}

void UThePlainesGameInstance::BPF_HideLoadingScreen(bool _bFade, float _fFadeDuration) {
}

UReplaySystem* UThePlainesGameInstance::BPF_GetReplaySystem() const {
    return NULL;
}

ASCPlayerStart* UThePlainesGameInstance::BPF_GetPlayerStartUsedAtSpawn() {
    return NULL;
}

FString UThePlainesGameInstance::BPF_GetPlayerId(ULocalPlayer* _player) {
    return TEXT("");
}

float UThePlainesGameInstance::BPF_GetLoadingScreenTickTime() {
    return 0.0f;
}

UWGGameFlow* UThePlainesGameInstance::BPF_GetGameFlow() const {
    return NULL;
}

bool UThePlainesGameInstance::BPF_ConsumeNextError(FSCError& _error) {
    return false;
}

bool UThePlainesGameInstance::BPF_CanTargetFaction(EFactionsEnums _eMyFaction, EFactionsEnums _eTargetFaction) const {
    return false;
}

void UThePlainesGameInstance::BPF_BeginLoadingScreen() {
}


UThePlainesGameInstance::UThePlainesGameInstance() {
    this->m_loadingScreenClass = NULL;
    this->m_loadingScreen = NULL;
   /* this->m_MuteEvent = NULL;
    this->m_UnmuteEvent = NULL;*/
    this->m_GameFlow = NULL;
    this->m_AntiCheatMapTagName = TEXT("SelectHideout");
    this->m_ItemsDB = NULL;
    this->m_InputManager = NULL;
    this->m_FactionsManager = NULL;
    this->m_SCCheatManager = NULL;
    this->m_PredictionManagerClass = UPredictionManager::StaticClass();
    this->m_CinematicManager = NULL;
    this->m_MessageManager = NULL;
    this->m_sessionManager = NULL;
    this->m_SessionTimeManager = NULL;
    this->m_ReplaySystem = NULL;
}

