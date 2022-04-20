#include "SCUserWidget.h"

class UWidgetAnimation;
class UDefenseComponent;
class UWidgetData;
class UWorld;
class USocialManager;
class UStatsComponent;
class UPanelWidget;
class UThePlainesGameInstance;
class USocialComponent;
class ASCPlayerController;
class UMenuWidget;
class UMenuDB;
class UCharacterHealthComponent;
class AFightingPlayerController;
class UAttackComponent;
class AFightingCharacter;
class USCAbilitySystemComponent;

void USCUserWidget::OnDataUpdated() {
}

void USCUserWidget::BPF_SetData(UWidgetData* _data) {
}

void USCUserWidget::BPF_PlayAnimationFromCurrentTime(UWidgetAnimation* _inAnimation, int32 _iNumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> _ePlayMode) {
}

void USCUserWidget::BPF_NotifyDataUpdatedToChildren(UPanelWidget* _root) {
}

void USCUserWidget::BPF_NotifyDataUpdated() {
}

bool USCUserWidget::BPF_IsVisibleInTree() {
    return false;
}

bool USCUserWidget::BPF_IsPlayerLeaderInPvpAndHasAllies() const {
    return false;
}

bool USCUserWidget::BPF_IsCursorNavigationEnabled() const {
    return false;
}

void USCUserWidget::BPF_GiveFocusIfNeeded() {
}

EUIInputModes USCUserWidget::BPF_GetUIInputMode() const {
    return EUIInputModes::Controller;
}

UThePlainesGameInstance* USCUserWidget::BPF_GetThePlainesGameInstance() const {
    return NULL;
}

UStatsComponent* USCUserWidget::BPF_GetStatsComponent() const {
    return NULL;
}

USocialManager* USCUserWidget::BPF_GetSocialManager() const {
    return NULL;
}

USocialComponent* USCUserWidget::BPF_GetSocialComponent() const {
    return NULL;
}

ASCPlayerController* USCUserWidget::BPF_GetPlayerController() const {
    return NULL;
}

//EPlatform USCUserWidget::BPF_GetPlatform() const {
//    return EPlatform::STEAM;
//}

UMenuWidget* USCUserWidget::BPF_GetParentMenu() const {
    return NULL;
}

UMenuDB* USCUserWidget::BPF_GetMenuDB() {
    return NULL;
}

UCharacterHealthComponent* USCUserWidget::BPF_GetHealthComponent() const {
    return NULL;
}

AFightingPlayerController* USCUserWidget::BPF_GetFightingPlayerController() const {
    return NULL;
}

AFightingCharacter* USCUserWidget::BPF_GetFightingCharacter() const {
    return NULL;
}

UDefenseComponent* USCUserWidget::BPF_GetDefenseComponent() const {
    return NULL;
}

UWidgetData* USCUserWidget::BPF_GetData() {
    return NULL;
}

UWorld* USCUserWidget::BPF_GetCurrentWorld() const {
    return NULL;
}

UAttackComponent* USCUserWidget::BPF_GetAttackComponent() const {
    return NULL;
}

USCAbilitySystemComponent* USCUserWidget::BPF_GetAbilitySystemComponent() const {
    return NULL;
}

bool USCUserWidget::BPF_CheckControllerHasAnyFocus() const {
    return false;
}





void USCUserWidget::BPE_OnPawnChanged_Implementation(AFightingCharacter* _character) {
}



void USCUserWidget::BPE_OnDataUpdated_Implementation() {
}

void USCUserWidget::BPE_OnCultureChanged_Implementation() {
}

void USCUserWidget::BPE_GiveFocus_Implementation() {
}

UWidgetData* USCUserWidget::BPE_CreateData_Implementation() {
    return NULL;
}


USCUserWidget::USCUserWidget() {
    this->m_ActiveVisibility = ESlateVisibility::Visible;
    this->m_Data = NULL;
    this->m_DataClass = NULL;
    this->m_eControllerInputModeVisibility = ESlateVisibility::Collapsed;
    this->m_eMouseInputModeVisibility = ESlateVisibility::Collapsed;
    this->m_bGiveFocusIfNeededWithKeyboard = false;
    this->m_eFocusedVisibility = ESlateVisibility::Collapsed;
    this->m_bOnGiveFocusButtonOnly = true;
    this->m_bNotifyPawnChanged = false;
    this->m_bNotifyUIInputModeChanged = false;
    this->m_bForceGamepadUI = false;
    this->m_bUpdateDataOnCharacterProgression = false;
    this->m_bUpdateDataOnVisible = true;
}

