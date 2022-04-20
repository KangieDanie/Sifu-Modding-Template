#include "PlayerFightingComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;

void UPlayerFightingComponent::OnTargetChangedCallback(AActor* _oldTarget, AActor* _newTarget) {
}

void UPlayerFightingComponent::OnStatsUpdated() {
}

void UPlayerFightingComponent::OnRep_Dialog() {
}

void UPlayerFightingComponent::OnLanded() {
}

void UPlayerFightingComponent::BPF_SetIsInEndOfMovesetTutorial(bool _bActivate) {
}

void UPlayerFightingComponent::BPF_ServerSetIsInDialog_Implementation(bool _bInDialog) {
}
bool UPlayerFightingComponent::BPF_ServerSetIsInDialog_Validate(bool _bInDialog) {
    return true;
}

void UPlayerFightingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlayerFightingComponent, m_bIsInDialog);
}

UPlayerFightingComponent::UPlayerFightingComponent() {
    this->m_bIsInDialog = false;
    this->m_DefaultEquipmentSelection = NULL;
    this->m_fLockMoveFadeDuration = 1.00f;
    this->m_fEnemyBehindDist = 600.00f;
    this->m_fEnemyBehindCosAngle = 0.60f;
    this->m_eForcedGender = ECharacterGender::None;
    this->m_bFakePlayer = false;
}

