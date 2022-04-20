#include "ReplayablePhysicsComponent.h"
#include "Net/UnrealNetwork.h"

void UReplayablePhysicsComponent::OnRep_LastPoseSnapshot() {
}

void UReplayablePhysicsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UReplayablePhysicsComponent, m_lastPoseSnapshot);
}

UReplayablePhysicsComponent::UReplayablePhysicsComponent() {
    this->m_skeletalMeshComp = NULL;
}

