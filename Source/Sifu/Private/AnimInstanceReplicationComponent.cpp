#include "AnimInstanceReplicationComponent.h"
#include "Net/UnrealNetwork.h"

void UAnimInstanceReplicationComponent::OnReplaySystemRecordingChanged(bool _bIsRecording) {
}

void UAnimInstanceReplicationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAnimInstanceReplicationComponent, m_ReplicatedAnimGraphVersion);
    DOREPLIFETIME(UAnimInstanceReplicationComponent, m_ReplicatedStateMachineSnapshots);
    DOREPLIFETIME(UAnimInstanceReplicationComponent, m_ReplicatedAnimInstancePlayerAssets);
    DOREPLIFETIME(UAnimInstanceReplicationComponent, m_ReplicatedSubAnimInstances);
    DOREPLIFETIME(UAnimInstanceReplicationComponent, m_AnimInstance);
}

UAnimInstanceReplicationComponent::UAnimInstanceReplicationComponent() {
    this->m_AllowedReplicatedTypes.AddDefaulted(3);
    this->m_AnimInstance = NULL;
}

