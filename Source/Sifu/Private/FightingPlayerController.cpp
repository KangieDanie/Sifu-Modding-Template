#include "FightingPlayerController.h"
#include "Net/UnrealNetwork.h"

class UInteractionObjectComponent;
class AActor;
class UCharacterProgressionUnlockDB;
class AAISpawner;
class UPanelWidget;
class UMenuWidget;
class UWidgetPoolComponent;
class UTargetableWidgetUpdaterComponent;
class UPopupWidget;
class UUserWidget;

void AFightingPlayerController::ToggleWaterMark() {
}

void AFightingPlayerController::ToggleInteractionDetectionDebug() {
}

void AFightingPlayerController::SuicideAll() {
}

void AFightingPlayerController::Suicide(float _fDelay) {
}

void AFightingPlayerController::SimulateError(const FString& _error) {
}

void AFightingPlayerController::SimulateClientReturnToMainMenu(const FString& _reason) {
}

void AFightingPlayerController::ShowQuadrant(uint8 _uiParam) {
}

void AFightingPlayerController::SetOptionValue(FName _optionType, float _fOptionValue) {
}

void AFightingPlayerController::SetHealth(float _fHP) {
}

void AFightingPlayerController::SessionTimeManagerActivateDebug(bool _bActivate) {
}

void AFightingPlayerController::ServerUseInterractiveObject_Implementation(bool _bSuccess, UInteractionObjectComponent* _componentUsed) {
}
bool AFightingPlayerController::ServerUseInterractiveObject_Validate(bool _bSuccess, UInteractionObjectComponent* _componentUsed) {
    return true;
}

void AFightingPlayerController::ServerSuicideAll_Implementation() {
}
bool AFightingPlayerController::ServerSuicideAll_Validate() {
    return true;
}

void AFightingPlayerController::ServerSetEnvDeathRespawn_Implementation(bool _bValue) {
}
bool AFightingPlayerController::ServerSetEnvDeathRespawn_Validate(bool _bValue) {
    return true;
}

void AFightingPlayerController::ServerSendLocalCoopGroup_Implementation(const TArray<FCoopGroup>& _coopGroup) {
}
bool AFightingPlayerController::ServerSendLocalCoopGroup_Validate(const TArray<FCoopGroup>& _coopGroup) {
    return true;
}

void AFightingPlayerController::ServerRequestTimeSync_Implementation(uint8 _uiClientRequestID) {
}
bool AFightingPlayerController::ServerRequestTimeSync_Validate(uint8 _uiClientRequestID) {
    return true;
}

void AFightingPlayerController::ServerFirstRequestTimeSync_Implementation(uint8 _uiClientRequestID) {
}
bool AFightingPlayerController::ServerFirstRequestTimeSync_Validate(uint8 _uiClientRequestID) {
    return true;
}

void AFightingPlayerController::ServerDropItem_Implementation() {
}
bool AFightingPlayerController::ServerDropItem_Validate() {
    return true;
}

void AFightingPlayerController::RemovePlayer() {
}

void AFightingPlayerController::PawnDestructionOver(AActor* _destroyedActor) {
}


void AFightingPlayerController::OnPlayerProgressionUpdated() {
}

void AFightingPlayerController::OnPlayerNotifyProgressionRewardUnlocked(ECharacterProgressionRewardTypes _eRewardType, const FCharacterProgressionReward& _reward, UCharacterProgressionUnlockDB* _unlock) {
}

void AFightingPlayerController::OnPickUpDestroyed(UInteractionObjectComponent* _component) {
}

void AFightingPlayerController::OnPawnDangerStateChanged(EDangerStates _ePreviousDangerState, EDangerStates _eNewDangerState) {
}

void AFightingPlayerController::OnNeedUpdateFromGameUserSettings() {
}



void AFightingPlayerController::OnCharacterInteractionObjectChanged(UInteractionObjectComponent* _objectComp, bool _bNewComp) {
}


void AFightingPlayerController::Mute(bool bMute) {
}

void AFightingPlayerController::GiveFocusToGameViewport() {
}

void AFightingPlayerController::ForceCameraOffsetAt(bool _bActivate, float _fRatio) {
}

void AFightingPlayerController::DumpPlayerInfo() {
}

void AFightingPlayerController::DebugToggleFollowPlayer(int32 _iPlayerIndex) {
}

void AFightingPlayerController::DebugSpeedForceZ(bool _bActivate, float _fZValue) {
}


void AFightingPlayerController::ClientSendNewCoopGroup_Implementation(const TArray<FCoopGroup>& _coopGroup) {
}
bool AFightingPlayerController::ClientSendNewCoopGroup_Validate(const TArray<FCoopGroup>& _coopGroup) {
    return true;
}

void AFightingPlayerController::ClientSendEntireCoopGroup_Implementation(const TArray<FCoopGroup>& _coopGroup, const FCoopGroup& _coopGroupReturnToPVE) {
}
bool AFightingPlayerController::ClientSendEntireCoopGroup_Validate(const TArray<FCoopGroup>& _coopGroup, const FCoopGroup& _coopGroupReturnToPVE) {
    return true;
}

void AFightingPlayerController::ClientRespawnLocalAI_Implementation(AAISpawner* _spawner) {
}

void AFightingPlayerController::ClientRequestTimeSync_Implementation(uint8 _uiClientRequestID, int64 _serverTimeTicks) {
}

void AFightingPlayerController::ClientFirstRequestTimeSync_Implementation(uint8 _uiClientRequestID, int64 _serverTimeTicks) {
}

void AFightingPlayerController::Client_RestartMatch_Implementation() {
}

void AFightingPlayerController::Client_ReceiveAllyHeal_Implementation() {
}

void AFightingPlayerController::CheckAttackAnimations() {
}

void AFightingPlayerController::BPF_ValidationReceived(bool _bResult) {
}

void AFightingPlayerController::BPF_UnlockAllEmotes() {
}

bool AFightingPlayerController::BPF_ShouldDisplayInteractionText(bool& _bOutCanInteract) {
    return false;
}

void AFightingPlayerController::BPF_SetWantsRespawnOnStartPoint(bool _bRespwnOnStartPoint) {
}

void AFightingPlayerController::BPF_SetEmoteLock(bool _bLock, const FName& _emoteName) {
}

void AFightingPlayerController::BPF_SetEmissiveParamOnPawn(float _fParamValue) {
}

void AFightingPlayerController::BPF_SetCurrentMenu(EMenuEnum _eMenu) {
}

void AFightingPlayerController::BPF_RemoveMenuFromStack(EMenuEnum _eMenu) {
}

UMenuWidget* AFightingPlayerController::BPF_PushMenu(EMenuEnum _eMenuEnum, UPanelWidget* _container) {
    return NULL;
}

void AFightingPlayerController::BPF_PopMenuStack(EMenuEnum _eMenuEnum, bool _bIncluded) {
}

void AFightingPlayerController::BPF_PopMenu(bool _bRestoreFocus) {
}

bool AFightingPlayerController::BPF_IsMenuInStack(EMenuEnum _eMenu) const {
    return false;
}

bool AFightingPlayerController::BPF_IsMenuEnabled(EMenuEnum _eMenu) const {
    return false;
}

bool AFightingPlayerController::BPF_IsKeyBindedToInputAction(FKey _key, InputAction _eInputAction) {
    return false;
}

bool AFightingPlayerController::BPF_IsInGameMenuEnabled() const {
    return false;
}

UWidgetPoolComponent* AFightingPlayerController::BPF_GetWidgetPoolComponent() {
    return NULL;
}

bool AFightingPlayerController::BPF_GetWantRespawn() const {
    return false;
}

bool AFightingPlayerController::BPF_GetVirtualCursorEnabled() const {
    return false;
}

UMenuWidget* AFightingPlayerController::BPF_GetTopMenuInstance() const {
    return NULL;
}

EMenuEnum AFightingPlayerController::BPF_GetTopMenu() const {
    return EMenuEnum::InGameMenu;
}

UTargetableWidgetUpdaterComponent* AFightingPlayerController::BPF_GetTagetableWigetUpdaterComponent() const {
    return NULL;
}

UPopupWidget* AFightingPlayerController::BPF_GetPopupYesNo() {
    return NULL;
}

UMenuWidget* AFightingPlayerController::BPF_GetParentMenu(EMenuEnum& _eOutMenu, int32 _iOffset) const {
    return NULL;
}

UMenuWidget* AFightingPlayerController::BPF_GetOrCreateMenuInstance(EMenuEnum _eMenuEnum) {
    return NULL;
}

UMenuWidget* AFightingPlayerController::BPF_GetMenuInstance(EMenuEnum _eMenu) const {
    return NULL;
}

UUserWidget* AFightingPlayerController::BPF_GetMenuAnimations() {
    return NULL;
}

float AFightingPlayerController::BPF_GetFadeTime() const {
    return 0.0f;
}

EMenuEnum AFightingPlayerController::BPF_GetCurrentMenu() const {
    return EMenuEnum::InGameMenu;
}

UInteractionObjectComponent* AFightingPlayerController::BPF_GetCurrentInteractionObjectComponent() const {
    return NULL;
}

void AFightingPlayerController::BPF_EnterSpectatorMode() {
}

void AFightingPlayerController::BPF_EnableVirtualCursor(bool _bEnable) {
}

void AFightingPlayerController::BPF_EnableInGameMenu() {
}

void AFightingPlayerController::BPF_DismissNewProgressionRewards(ECharacterProgressionRewardTypes _eReward) {
}

void AFightingPlayerController::BPF_DisableInGameMenu() {
}

void AFightingPlayerController::BPF_DebugForcePerfectLink(bool _bActivate) {
}

void AFightingPlayerController::BPF_DebugForceAttackQuadrant(EQuadrantTypes _eQuadrant) {
}

void AFightingPlayerController::BPF_DebugAutoTargetAttackTicketAI(bool _bActivate) {
}

void AFightingPlayerController::BPF_ClosePickUpMenu() {
}

void AFightingPlayerController::BPF_ClearMenuStack() {
}

void AFightingPlayerController::BPF_CacheMenuIcons() {
}

void AFightingPlayerController::BPF_ActivateHitDetailsDebug(bool _bActivate) {
}



bool AFightingPlayerController::BPE_ShouldEnablePostProcessComponent_Implementation() const {
    return false;
}











void AFightingPlayerController::BakeAttackAnimations() {
}

void AFightingPlayerController::ActivateHitIgnorance(bool _bActivate) {
}

void AFightingPlayerController::ActivateCameraAimDebug(bool _bActivate) {
}

void AFightingPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFightingPlayerController, m_bEnvDeathRespawn);
    DOREPLIFETIME(AFightingPlayerController, m_iCharacterLevel);
}

AFightingPlayerController::AFightingPlayerController() {
    this->m_InteractionUseLockText = false;
    this->m_MenuSkillTree = NULL;
    this->m_bShowAltAttackStartQuadrant = false;
    this->m_bEnvDeathRespawn = false;
    this->m_bDebugDisplayAttackLearning = false;
    this->m_bLoadMenusAsync = true;
    this->m_bHideNonInteractableObjectComponent = false;
    this->m_MenuClasses[0] = NULL;
    this->m_MenuClasses[1] = NULL;
    this->m_MenuClasses[2] = NULL;
    this->m_MenuClasses[3] = NULL;
    this->m_MenuClasses[4] = NULL;
    this->m_MenuClasses[5] = NULL;
    this->m_MenuClasses[6] = NULL;
    this->m_MenuClasses[7] = NULL;
    this->m_MenuClasses[8] = NULL;
    this->m_MenuClasses[9] = NULL;
    this->m_MenuClasses[10] = NULL;
    this->m_MenuClasses[11] = NULL;
    this->m_MenuClasses[12] = NULL;
    this->m_MenuClasses[13] = NULL;
    this->m_MenuClasses[14] = NULL;
    this->m_MenuClasses[15] = NULL;
    this->m_MenuClasses[16] = NULL;
    this->m_MenuClasses[17] = NULL;
    this->m_MenuClasses[18] = NULL;
    this->m_MenuClasses[19] = NULL;
    this->m_MenuClasses[20] = NULL;
    this->m_MenuClasses[21] = NULL;
    this->m_MenuClasses[22] = NULL;
    this->m_MenuClasses[23] = NULL;
    this->m_MenuClasses[24] = NULL;
    this->m_MenuClasses[25] = NULL;
    this->m_MenuClasses[26] = NULL;
    this->m_MenuClasses[27] = NULL;
    this->m_MenuClasses[28] = NULL;
    this->m_MenuClasses[29] = NULL;
    this->m_MenuClasses[30] = NULL;
    this->m_MenuClasses[31] = NULL;
    this->m_MenuClasses[32] = NULL;
    this->m_MenuClasses[33] = NULL;
    this->m_MenuClasses[34] = NULL;
    this->m_MenuClasses[35] = NULL;
    this->m_MenuClasses[36] = NULL;
    this->m_MenuClasses[37] = NULL;
    this->m_MenuClasses[38] = NULL;
    this->m_MenuClasses[39] = NULL;
    this->m_MenuClasses[40] = NULL;
    this->m_MenuClasses[41] = NULL;
    this->m_MenuClasses[42] = NULL;
    this->m_MenuClasses[43] = NULL;
    this->m_MenuAnimationsClass = NULL;
    this->m_eMenuListPreventingInGameMenu.AddDefaulted(1);
    this->m_MenuInstances[0] = NULL;
    this->m_MenuInstances[1] = NULL;
    this->m_MenuInstances[2] = NULL;
    this->m_MenuInstances[3] = NULL;
    this->m_MenuInstances[4] = NULL;
    this->m_MenuInstances[5] = NULL;
    this->m_MenuInstances[6] = NULL;
    this->m_MenuInstances[7] = NULL;
    this->m_MenuInstances[8] = NULL;
    this->m_MenuInstances[9] = NULL;
    this->m_MenuInstances[10] = NULL;
    this->m_MenuInstances[11] = NULL;
    this->m_MenuInstances[12] = NULL;
    this->m_MenuInstances[13] = NULL;
    this->m_MenuInstances[14] = NULL;
    this->m_MenuInstances[15] = NULL;
    this->m_MenuInstances[16] = NULL;
    this->m_MenuInstances[17] = NULL;
    this->m_MenuInstances[18] = NULL;
    this->m_MenuInstances[19] = NULL;
    this->m_MenuInstances[20] = NULL;
    this->m_MenuInstances[21] = NULL;
    this->m_MenuInstances[22] = NULL;
    this->m_MenuInstances[23] = NULL;
    this->m_MenuInstances[24] = NULL;
    this->m_MenuInstances[25] = NULL;
    this->m_MenuInstances[26] = NULL;
    this->m_MenuInstances[27] = NULL;
    this->m_MenuInstances[28] = NULL;
    this->m_MenuInstances[29] = NULL;
    this->m_MenuInstances[30] = NULL;
    this->m_MenuInstances[31] = NULL;
    this->m_MenuInstances[32] = NULL;
    this->m_MenuInstances[33] = NULL;
    this->m_MenuInstances[34] = NULL;
    this->m_MenuInstances[35] = NULL;
    this->m_MenuInstances[36] = NULL;
    this->m_MenuInstances[37] = NULL;
    this->m_MenuInstances[38] = NULL;
    this->m_MenuInstances[39] = NULL;
    this->m_MenuInstances[40] = NULL;
    this->m_MenuInstances[41] = NULL;
    this->m_MenuInstances[42] = NULL;
    this->m_MenuInstances[43] = NULL;
    this->m_OutlineMaterial = NULL;
    this->m_PopupYesNo = NULL;
    this->m_fTimeSinceLastNonRedundantUserInput = 0.00f;
    this->m_MenuAnimationsInstance = NULL;
    this->m_EquipmentSelection = NULL;
    this->m_PickUpMenuClass = NULL;
    this->m_fPreviewTimerHighlight = 0.10f;
    this->m_fPreviewTimerScrollBox = 0.10f;
    this->m_fFadeTime = 3.00f;
    this->m_WaterMarkBP = NULL;
    this->m_WaterMarkScreen = NULL;
    this->m_iCharacterLevel = 0;
    this->m_CairnClass = NULL;
    this->m_MaterialParameterCollectionFXVisualParam = NULL;
}

