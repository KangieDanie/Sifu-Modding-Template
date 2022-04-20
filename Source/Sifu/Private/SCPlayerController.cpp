#include "SCPlayerController.h"

class UInputContextData;
class UUserWidget;
class AActor;

void ASCPlayerController::UnlockAchievement(const FString& achievementId) {
}

void ASCPlayerController::ResetAllAchievements() {
}

void ASCPlayerController::ResetAchievement(const FString& achievementId) {
}

void ASCPlayerController::QueryAchievements() {
}

void ASCPlayerController::PushInputContext(UInputContextData* _inputContextData) {
}

void ASCPlayerController::PopInputContext(UInputContextData* _inputContextData) {
}

void ASCPlayerController::DebugTriggerEventProgession(const FString& _eventName, const FString& _eventParamName, int32 _iEventParamValue) {
}

void ASCPlayerController::BPF_UpdateActivity(const FString& _activityID, EActivityWantedState _eActivityWantedState) {
}

void ASCPlayerController::BPF_UpdateAchievementCompletion(const FString& _achievementID, float _fCompletionPercent) {
}

void ASCPlayerController::BPF_ToggleMouseCaptureMode() {
}

void ASCPlayerController::BPF_StartTimedAchievement(const FName& _achievementID, int32 _iNumOccurencess) {
}

void ASCPlayerController::BPF_SetInUIInputMode(bool _bActivate, bool _bUIOnly) {
}

void ASCPlayerController::BPF_SetHUD(UUserWidget* _inHUD) {
}

void ASCPlayerController::BPF_RestartAllActivities() {
}

void ASCPlayerController::BPF_ResetAllActivities() {
}

void ASCPlayerController::BPF_QueryAchievements() {
}

bool ASCPlayerController::BPF_HasUnlockAllAchievements() {
    return false;
}

float ASCPlayerController::BPF_GetTimedAchievementElapsed(const FName& _achievementID, int32& _iOutOnGoingOccurences) {
    return 0.0f;
}

AActor* ASCPlayerController::BPF_GetStartSpot() const {
    return NULL;
}

FName ASCPlayerController::BPF_GetLastGamepadControllerType() const {
    return NAME_None;
}

void ASCPlayerController::BPF_ChangeActivityAvailability(const FString& _activityID, bool _bSetAvailable) {
}








ASCPlayerController::ASCPlayerController() {
}

