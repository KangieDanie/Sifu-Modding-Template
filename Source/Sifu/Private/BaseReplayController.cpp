#include "BaseReplayController.h"
#include "ReplaySpectatorPawn.h"

class AReplayHUD;
class UHandleInput;
class IHandleInput;

void ABaseReplayController::OnSaveGameStatusChanged(bool _bSaveInProgress, ESaveResult _eSaveResult) {
}

AReplayHUD* ABaseReplayController::GetReplayHUD() const {
    return NULL;
}

void ABaseReplayController::BPF_ShowMessageFeedback(EMessageReason _eReason) {
}

void ABaseReplayController::BPF_SetSingleActiveMenu(TScriptInterface<IHandleInput> _menu) {
}

bool ABaseReplayController::BPF_PushSpectatorAvailabilityLayer(bool _bUpdateUIMode, bool _bCheckAlreadyPushed) {
    return false;
}

void ABaseReplayController::BPF_PushAvailabilityLayers(FAvailabilityLayerCaches& _inOutCacheALs, bool _bCheckIfAlreadyPushed) {
}

void ABaseReplayController::BPF_PushAvailabilityLayer(FAvailabilityLayerCache& _inOutCacheAL, bool _bCheckIfAlreadyPushed, int32 _iPriority) {
}

bool ABaseReplayController::BPF_PopSpectatorAvailabilityLayer(bool _bUpdateUIMode, bool _bCheckAlreadyPopped) {
    return false;
}

void ABaseReplayController::BPF_PopAvailabilityLayers(FAvailabilityLayerCaches& _inOutCacheALs, bool _bCheckIfAlreadyPopped) {
}

void ABaseReplayController::BPF_PopAvailabilityLayer(FAvailabilityLayerCache& _inOutCacheAL, bool _bCheckIfAlreadyPopped) {
}

bool ABaseReplayController::BPF_IsInputActionAvailable(InputAction _eInputAction) const {
    return false;
}

ABaseReplayController::ABaseReplayController() {
    this->m_bFixedSpectatorMode = false;
    this->m_eMainInputContext = InputContext::PhotoModeMenu;
    this->m_SpectatorClass = AReplaySpectatorPawn::StaticClass();
    this->m_HUDClass = NULL;
    this->m_MenuClass = NULL;
    this->m_Menu = NULL;
    this->m_AvailabilityDefaultLayerDB = NULL;
    this->m_RollFeedbackClass = NULL;
    this->m_ZoomFeedbackClass = NULL;
    this->m_SaveGameWidgetClass = NULL;
    this->m_RollFeedbackInstance = NULL;
    this->m_ZoomFeedbackInstance = NULL;
    this->m_SaveGameWidgetInstance = NULL;
}

