#include "SCAnimInstanceBase.h"
#include "Net/UnrealNetwork.h"

void USCAnimInstanceBase::OnRep_AnimInstanceUpdateEnable() {
}

void USCAnimInstanceBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USCAnimInstanceBase, m_bAnimInstanceUpdateEnabled);
}

USCAnimInstanceBase::USCAnimInstanceBase() {
    this->m_bIsReplayScrubSnapshotCompatible = false;
    this->m_bAnimInstanceUpdateEnabled = false;
}

