#include "AIFightingComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class UCombo;
class UOrderComponent;
class UFightingMovementComponent;
class UAttackDB;
class APathPatrol;
class UAIContextualDefense;
class UAvoidAbility;
class AActor;
class UAIPhaseScenario;
class UObject;

void UAIFightingComponent::OnTargetHitDuringAttack(const FHitDescription& _hitDescription) {
}

void UAIFightingComponent::OnOrderTraversalEnded(uint8 _iOrderID, UOrderComponent* _OrderComponent) {
}

void UAIFightingComponent::OnOrderGrabbedStarted(uint8 _iOrderID, UOrderComponent* _OrderComponent) {
}

void UAIFightingComponent::OnOrderGrabbedEnded(uint8 _iOrderID, UOrderComponent* _OrderComponent) {
}

void UAIFightingComponent::OnOrderAvoidedStarted(uint8 _uiOrderId, UOrderComponent* _OrderComponent) {
}

void UAIFightingComponent::OnOrderAttackStarted(uint8 _uiOrderId, UOrderComponent* _OrderComponent) {
}

void UAIFightingComponent::OnMoveStatusChanged(UFightingMovementComponent* _movementComponent) {
}

void UAIFightingComponent::OnAIPhaseChangeSequenceFinished() {
}

void UAIFightingComponent::HittedDetection(const FHitDescription& _hitDescription) {
}

void UAIFightingComponent::BPF_UnspawnCarriedProps() {
}

EDefenseTactics UAIFightingComponent::BPF_TestContextualDefense(UAttackDB* _attackToTest) {
    return EDefenseTactics::Invalid;
}

bool UAIFightingComponent::BPF_SwitchToPhaseBySoftLink(const FAIPhaseNodeSoftLink& _phaseLink) {
    return false;
}

void UAIFightingComponent::BPF_SwitchToPhaseByName(FName _name) {
}

bool UAIFightingComponent::BPF_SwitchToPhaseByHardLink(const FAIPhaseNodeHardLink& _phaseLink) {
    return false;
}

void UAIFightingComponent::BPF_SwitchToPhase(int32 _iPhase) {
}

void UAIFightingComponent::BPF_SwitchToIdle(bool _bEnabledPerception) {
}

void UAIFightingComponent::BPF_SwitchToFriendly(const bool _bFromDialog) {
}

void UAIFightingComponent::BPF_SwitchToCombatRole(ESCAICombatRoles _eNewRole) {
}

void UAIFightingComponent::BPF_SwitchToAbandoning(const bool _bFromDialog) {
}

void UAIFightingComponent::BPF_SpawnCarriedProps() {
}

void UAIFightingComponent::BPF_SetStructureGaugeVisible(bool _bVisible) {
}

void UAIFightingComponent::BPF_SetPerceptionEnabled(bool _bEnabled) {
}

void UAIFightingComponent::BPF_SetPathPatrol(APathPatrol* _newpathPatrol) {
}

void UAIFightingComponent::BPF_SetHealthGaugeVisible(bool _bVisible) {
}

void UAIFightingComponent::BPF_SetDeathCounterResetWhenKilled(bool _bReset) {
}

void UAIFightingComponent::BPF_SetDeathCounterDecreaseWhenKilled(int32 _iCount) {
}

void UAIFightingComponent::BPF_RespawnStartupWeapon() {
}

void UAIFightingComponent::BPF_ResetComboToDefault(FName _nameOfDifficultyLevel) {
}

void UAIFightingComponent::BPF_ResetAvoidAbilityToDefault() {
}

void UAIFightingComponent::BPF_RemoveCarriedProps(int32 _iIndex) {
}

void UAIFightingComponent::BPF_PushContextualDefenseOverride(FName _overrideName, UAIContextualDefense* _contextualDefenseOverride, EAIContextualDefenseType _eType) {
}

void UAIFightingComponent::BPF_PopContextualDefenseOverride(FName _overrideName, EAIContextualDefenseType _eType) {
}

void UAIFightingComponent::BPF_OverrideCombo(FName _nameOfDifficultyLevel, UCombo* _combo) {
}

void UAIFightingComponent::BPF_OverrideAvoidAbility(const TSubclassOf<UAvoidAbility>& _avoidAbility) {
}

bool UAIFightingComponent::BPF_IsStructureGaugeVisible() const {
    return false;
}

bool UAIFightingComponent::BPF_IsInPrefightLowStructure() const {
    return false;
}

bool UAIFightingComponent::BPF_IsInLastManPhase() const {
    return false;
}

bool UAIFightingComponent::BPF_IsHealthGaugeVisible() const {
    return false;
}

bool UAIFightingComponent::BPF_HasSpawnerGroupConfrontationDialog() {
    return false;
}

bool UAIFightingComponent::BPF_HasPathPatrol() const {
    return false;
}

bool UAIFightingComponent::BPF_HasAttackTicket() const {
    return false;
}

int32 UAIFightingComponent::BPF_GetXPBonus() {
    return 0;
}

EDefenseTactics UAIFightingComponent::BPF_GetPreparedDefenseTactic() const {
    return EDefenseTactics::Invalid;
}

EAlertedReason UAIFightingComponent::BPF_GetLastAlertedReason() const {
    return EAlertedReason::None;
}

EGlobalBehaviors UAIFightingComponent::BPF_GetGlobalBehavior(bool _bWithTimer) const {
    return EGlobalBehaviors::Idle;
}

AActor* UAIFightingComponent::BPF_GetEnemy() const {
    return NULL;
}

void UAIFightingComponent::BPF_GetDefenseTargetAttackInfos(FAIDefenseTargetAttackInfos& _outTargetAttackInfos) const {
}

void UAIFightingComponent::BPF_GetDefenseLastDefendedTargetAttackInfos(FAIDefenseTargetAttackInfos& _outTargetAttackInfos) const {
}

void UAIFightingComponent::BPF_GetCurrentPhase(FName& _outName, UAIPhaseScenario*& _outScenario) const {
}

EDefenseTactics UAIFightingComponent::BPF_GetCurrentDefenseTactic() const {
    return EDefenseTactics::Invalid;
}

ESCAICombatRoles UAIFightingComponent::BPF_GetCurrentCombatRole() const {
    return ESCAICombatRoles::None;
}

TArray<AActor*> UAIFightingComponent::BPF_GetCarriedProps() const {
    return TArray<AActor*>();
}

int32 UAIFightingComponent::BPF_GetCarriedPendantCharges() const {
    return 0;
}

UObject* UAIFightingComponent::BPF_GetBlackBoardValueAsObject(FName _key) const {
    return NULL;
}

void UAIFightingComponent::BPF_ForgetEnemy() {
}

void UAIFightingComponent::BPF_ForceEnemyReactionBehavior(EGlobalBehaviors _eGlobalBehavior) {
}

void UAIFightingComponent::BPF_ForceEnemy(AActor* _Enemy, EGlobalBehaviors _eForcedDetectionReaction) {
}

bool UAIFightingComponent::BPF_CanTriggerSpare() const {
    return false;
}

void UAIFightingComponent::BeforeGhostDamagesReset() {
}

void UAIFightingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAIFightingComponent, m_uiIdleIndex);
}

UAIFightingComponent::UAIFightingComponent() {
    this->m_iDeathCounterDecreaseWhenKilled = 0;
    this->m_bDeathCounterResetWhenKilled = false;
    this->m_fChainedDodgeDelay = 1.00f;
    this->m_fLateralDodgeAngle = 75.00f;
    this->m_fMemoryValidity = 10.00f;
    this->m_fPickupMaxDist = 500.00f;
    this->m_fThreatMinDistForPickup = 150.00f;
    this->m_fAlertPropagationDistance = 1000.00f;
    this->m_bCanBeAlerted = true;
    this->m_uiIdleIndex = 255;
}

