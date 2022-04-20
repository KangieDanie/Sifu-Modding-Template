#include "CharacterHealthComponent.h"
#include "Net/UnrealNetwork.h"

void UCharacterHealthComponent::OnRepSetIsDown() {
}

void UCharacterHealthComponent::BPF_ResetRecoveryCooldownFromValue(const float _fNewCooldownValue) {
}

void UCharacterHealthComponent::BPF_ResetRecoveryCooldown() {
}

float UCharacterHealthComponent::BPF_GetGhostDamage() {
    return 0.0f;
}

void UCharacterHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCharacterHealthComponent, m_fGhostDamage);
    DOREPLIFETIME(UCharacterHealthComponent, m_bIsDown);
    DOREPLIFETIME(UCharacterHealthComponent, m_eDownState);
    DOREPLIFETIME(UCharacterHealthComponent, m_iTimeRespawnNoDown);
}

UCharacterHealthComponent::UCharacterHealthComponent() {
    this->m_bCanRecoverHealth = true;
    this->m_fRecoveryRate = 0.00f;
    this->m_fRecoveryCooldownInit = 0.00f;
    this->m_fGhostDamageRecoveryRate = 5.00f;
    this->m_fGhostDamage = 0.00f;
    this->m_bIsDown = false;
    this->m_eDownState = EDownState::None;
    this->m_iTimeRespawnNoDown = 0;
    this->m_bCanUnspawnCharacter = true;
    this->m_RecoveryRateByDangerState[0] = 0.00f;
    this->m_RecoveryRateByDangerState[1] = 0.00f;
    this->m_RecoveryRateByDangerState[2] = 0.00f;
}

