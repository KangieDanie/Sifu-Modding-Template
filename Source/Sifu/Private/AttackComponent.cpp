#include "AttackComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;
class AVitalPointActor;
class AInteractiveMovable;
class UCombo;
class UTargetDB;
class UFocusDB;
class AThrowableActor;
class APushableActor;

void UAttackComponent::SetWantsComboRestart(bool _bWantsRestart) {
}

void UAttackComponent::ServerSetTarget_Implementation(AActor* _target) {
}
bool UAttackComponent::ServerSetTarget_Validate(AActor* _target) {
    return true;
}

void UAttackComponent::OnRep_DangerState(EDangerStates _ePreviousDangerState) {
}

void UAttackComponent::MulticastOrderAttackTrackingOver_Implementation(uint8 _uiOrderId) {
}

AActor* UAttackComponent::GetNextAttackTarget() const {
    return NULL;
}

void UAttackComponent::BPF_ValidateFocus(AVitalPointActor* _vitalPoint) {
}

void UAttackComponent::BPF_UpdateLockMoveTarget(AActor* _currentAttacked) {
}

void UAttackComponent::BPF_StopFocus(bool _bCancel) {
}

void UAttackComponent::BPF_StartFocus() {
}

void UAttackComponent::BPF_SetTargetForSlot(FName _BPTargetSlot, AActor* _target) {
}

void UAttackComponent::BPF_SetServiceActive(EActionType _eActionType, bool _bActive) {
}

void UAttackComponent::BPF_SetMoveDuringAttacks(bool _bMove) {
}

void UAttackComponent::BPF_SetFocusPointsInfinite(bool _bInfinite) {
}

void UAttackComponent::BPF_ResetToDefaultCombo() {
}

void UAttackComponent::BPF_OverrideCombo(UCombo* _combo) {
}

bool UAttackComponent::BPF_IsPlayingAttack() {
    return false;
}

bool UAttackComponent::BPF_IsFocusPointsInfinite() const {
    return false;
}

AVitalPointActor* UAttackComponent::BPF_GetVitalPointSelected() const {
    return NULL;
}

AInteractiveMovable* UAttackComponent::BPF_GetTempMovable(EActionType _eActionType) const {
    return NULL;
}

AActor* UAttackComponent::BPF_GetTargetForSlot(FName _BPTargetSlot) const {
    return NULL;
}

AActor* UAttackComponent::BPF_GetTargetForInput(InputAction _eInput) const {
    return NULL;
}

AActor* UAttackComponent::BPF_GetTargetForAction(EActionType _eActionType, bool _bForceOutOfDate) const {
    return NULL;
}

UTargetDB* UAttackComponent::BPF_GetTargetDB() const {
    return NULL;
}

TArray<AActor*> UAttackComponent::BPF_GetPotentialTargetsForAction(EActionType _eActionType) {
    return TArray<AActor*>();
}

FHitBox UAttackComponent::BPF_GetNextActiveHitBox(bool _bIncludeActive, bool& _bSuccess, bool& _bOutMirror, float& _fOutDelay) const {
    return FHitBox{};
}

ELimbs UAttackComponent::BPF_GetLimbFromBone(FName _boneName, bool _bMirror) const {
    return ELimbs::LeftArm;
}

float UAttackComponent::BPF_GetFocusTimeLeftInRatio() const {
    return 0.0f;
}

float UAttackComponent::BPF_GetFocusTimeLeft() const {
    return 0.0f;
}

UFocusDB* UAttackComponent::BPF_GetFocusDB() const {
    return NULL;
}

EDangerStates UAttackComponent::BPF_GetDangerState() const {
    return EDangerStates::Safe;
}

AThrowableActor* UAttackComponent::BPF_GetCurrentThrowable() const {
    return NULL;
}

APushableActor* UAttackComponent::BPF_GetCurrentPushable() const {
    return NULL;
}

float UAttackComponent::BPF_GetCurrentFocusPointsValue() const {
    return 0.0f;
}

FAvoidWindow UAttackComponent::BPF_GetCurrentAvoidWindow(bool& _bSuccess) const {
    return FAvoidWindow{};
}

float UAttackComponent::BPF_GetCurrentAttackTimeLeft() {
    return 0.0f;
}

EAttackStates UAttackComponent::BPF_GetCurrentAttackState() const {
    return EAttackStates::BuildUp;
}

float UAttackComponent::BPF_GetCurrentAttackRatio() {
    return 0.0f;
}

FName UAttackComponent::BPF_GetCurrentAttackName() const {
    return NAME_None;
}

float UAttackComponent::BPF_GetCurrentAttackDuration() {
    return 0.0f;
}

FComboAttack UAttackComponent::BPF_GetCurrentAttack(bool& _bSuccess) const {
    return FComboAttack{};
}

FAbsorbWindow UAttackComponent::BPF_GetCurrentAbsorbWindow(bool& _bSuccess) const {
    return FAbsorbWindow{};
}

FHitBox UAttackComponent::BPF_GetBestActiveHitBox(bool& _bSuccess, bool& _bOutMirror) const {
    return FHitBox{};
}

void UAttackComponent::BPF_ConsumeFocusPoints(float _fFocusPoints) {
}

bool UAttackComponent::BPF_CanConsumeFocusPoints(float _fFocusPointsNeeded) const {
    return false;
}

void UAttackComponent::BPF_AddFocusPointRefillValue(float _fFocusPointsToAdd) {
}

void UAttackComponent::BPF_AddFocusPointRefill(FSCUserDefinedEnumHandler _focusGainEnum) {
}

void UAttackComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAttackComponent, m_Target);
    DOREPLIFETIME(UAttackComponent, m_eDangerState);
}

UAttackComponent::UAttackComponent() {
    this->m_pushAnimRequest = NULL;
    this->m_DefaultCombo = NULL;
    this->m_ComboManager = NULL;
    this->m_fAttackReorientationDurationFromIdle = 0.20f;
    this->m_fAttackReorientationDurationFromAttack = 0.05f;
    this->m_fAttackReorientationDurationIfChangedDuringAttack = 0.15f;
    this->m_IdleDB = NULL;
    this->m_TakedownDB = NULL;
    this->m_fEnterFightDistance = 700.00f;
    this->m_fExitFightDistance = 1000.00f;
    this->m_fVirtualTargetAntiSpamRange = 150.00f;
    this->m_VirtualTargetRemapCurve = NULL;
    this->m_HitTargetBoneName = TEXT("custom_joint_01");
    this->m_TargetSocketHigh = TEXT("HitTarget_High");
    this->m_TargetSocketHighMiss = TEXT("HitTarget_High_Miss");
    this->m_TargetSocketHighMissSide = TEXT("HitTarget_High_Miss_Side");
    this->m_TargetSocketMid1 = TEXT("HitTarget_Mid_1");
    this->m_TargetSocketMidMiss = TEXT("HitTarget_Mid_Miss");
    this->m_TargetSocketMidMissSide = TEXT("HitTarget_Mid_Miss_Side");
    this->m_TargetSocketMid2 = TEXT("HitTarget_Mid_2");
    this->m_TargetSocketLowLeft = TEXT("HitTarget_Low_L");
    this->m_TargetSocketLowMiss = TEXT("HitTarget_Low_Miss");
    this->m_TargetSocketLowMissSide = TEXT("HitTarget_Low_Miss_Side");
    this->m_TargetSocketLowRight = TEXT("HitTarget_Low_R");
    this->m_AimIKCurveName = TEXT("AimIKAlphaCurve");
    this->m_FakeHipsBoneName = TEXT("custom_joint_02");
    this->m_TargetDB = NULL;
    this->m_StaminaConsumptionValues[0] = 0.00f;
    this->m_StaminaConsumptionValues[1] = 0.00f;
    this->m_StaminaConsumptionValues[2] = 0.00f;
    this->m_bAttackHasImpactOnGuardGauge = false;
    this->m_FreezeFrameNb[0] = 0.00f;
    this->m_FreezeFrameNb[1] = 0.00f;
    this->m_FreezeFrameNb[2] = 0.00f;
    this->m_ResilientFreezeFrameNb[0] = 0.00f;
    this->m_ResilientFreezeFrameNb[1] = 0.00f;
    this->m_ResilientFreezeFrameNb[2] = 0.00f;
    this->m_GuardFreezeFrameNb[0] = 0.00f;
    this->m_GuardFreezeFrameNb[1] = 0.00f;
    this->m_GuardFreezeFrameNb[2] = 0.00f;
    this->m_RushAttackDB = NULL;
    this->m_fFlatHitBoxesCapsuleHalfHeightFactorThresold = 2.00f;
    this->m_uiFlatHitBoxesControllerNatureMask = 4294967295;
    this->m_fDangerTimeOut = 3.00f;
    this->m_eDangerState = EDangerStates::Safe;
    this->m_fMaxDistSnap = 0.00f;
    this->m_bDisableSnapWhenTargetInRange = false;
    this->m_bCanGuardBreakAfterDeflected = false;
    this->m_FocusDB = NULL;
}

