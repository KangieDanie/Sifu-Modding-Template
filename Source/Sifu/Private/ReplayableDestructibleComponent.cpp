#include "ReplayableDestructibleComponent.h"
#include "Net/UnrealNetwork.h"

void UReplayableDestructibleComponent::OnRep_DamageEvents() {
}

void UReplayableDestructibleComponent::EnableNotifyHitEvent() {
}

void UReplayableDestructibleComponent::BPF_SetApexActorEnabled(bool _bValue) {
}

bool UReplayableDestructibleComponent::BPF_IsDamaged() const {
    return false;
}

void UReplayableDestructibleComponent::BPE_OnPreFirstDamageReceived_Implementation(float _fBaseDamage, bool _bFullDamage) {
}

void UReplayableDestructibleComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UReplayableDestructibleComponent, m_bOnFirstDestructionEnableChunksCollision);
    DOREPLIFETIME(UReplayableDestructibleComponent, m_DamageEvents);
}

UReplayableDestructibleComponent::UReplayableDestructibleComponent() {
    this->m_bCreatePhysicsStateAtStart = true;
    this->m_fDelayNotifyHitEvent = 0.00f;
    this->m_bOnFirstDestructionEnableChunksCollision = true;
    this->m_bCreatePhysicsState = true;
}

