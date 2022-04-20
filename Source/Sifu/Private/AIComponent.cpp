#include "AIComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;
class UArchetypeAsset;
class AAISpawner;

void UAIComponent::OnRep_Spawner() {
}

void UAIComponent::OnAIInitialized() {
}

void UAIComponent::BPF_TriggerBehaviorChange(AActor* _alertedBy, const EGlobalBehaviors _eNewBehavior, const EAlertedReason _eAlertedReason, bool _bSkipBark) {
}

FSCSoundSwitchValue UAIComponent::BPF_GetVoiceArchetypeSwitch() const {
    return FSCSoundSwitchValue{};
}

AAISpawner* UAIComponent::BPF_GetSpawner() const {
    return NULL;
}

UArchetypeAsset* UAIComponent::BPF_GetArchetypeData() const {
    return NULL;
}

void UAIComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAIComponent, m_Spawner);
}

UAIComponent::UAIComponent() {
    this->m_CurrentAIArchetype = NULL;
    this->m_Spawner = NULL;
    this->m_Behavior = NULL;
}

