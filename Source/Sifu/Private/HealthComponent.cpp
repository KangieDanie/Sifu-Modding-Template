#include "HealthComponent.h"
#include "Net/UnrealNetwork.h"

void UHealthComponent::ServerHackSetHealth_Implementation(float _fHealth) {
}
bool UHealthComponent::ServerHackSetHealth_Validate(float _fHealth) {
    return true;
}

void UHealthComponent::BPF_SetCanDieByDamage(bool _bValue) {
}

void UHealthComponent::BPF_SetCanBeDamaged(bool _bValue) {
}

void UHealthComponent::BPF_ServerSetHealth_Implementation(float _fHealth) {
}
bool UHealthComponent::BPF_ServerSetHealth_Validate(float _fHealth) {
    return true;
}

void UHealthComponent::BPF_ServerAddHealth_Implementation(float _fHealth) {
}
bool UHealthComponent::BPF_ServerAddHealth_Validate(float _fHealth) {
    return true;
}

float UHealthComponent::BPF_GetMaxHealth() const {
    return 0.0f;
}

float UHealthComponent::BPF_GetBaseMaxHealth() const {
    return 0.0f;
}

void UHealthComponent::BPF_ApplyDamage(float _fDamage) {
}

void UHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHealthComponent, m_fHealth);
}

UHealthComponent::UHealthComponent() {
    this->m_fHealth = 750.00f;
    this->m_fMaxHealth = 750.00f;
    this->m_iLifeStock = 0;
}

