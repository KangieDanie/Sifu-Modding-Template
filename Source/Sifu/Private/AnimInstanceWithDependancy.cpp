#include "AnimInstanceWithDependancy.h"
#include "Net/UnrealNetwork.h"

class USCAnimInstance;

void UAnimInstanceWithDependancy::Update(float _fDt) {
}

USCAnimInstance* UAnimInstanceWithDependancy::BPF_GetMasterAnimInstance() const {
    return NULL;
}


void UAnimInstanceWithDependancy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAnimInstanceWithDependancy, m_IdleAnimContainerFL);
    DOREPLIFETIME(UAnimInstanceWithDependancy, m_IdleAnimContainerFR);
    DOREPLIFETIME(UAnimInstanceWithDependancy, m_IdleAnimContainerBR);
    DOREPLIFETIME(UAnimInstanceWithDependancy, m_IdleAnimContainerBL);
    DOREPLIFETIME(UAnimInstanceWithDependancy, m_FreeMoveAnimContainer);
    DOREPLIFETIME(UAnimInstanceWithDependancy, m_bAnyAnimInProgress);
    DOREPLIFETIME(UAnimInstanceWithDependancy, m_animInfo1);
    DOREPLIFETIME(UAnimInstanceWithDependancy, m_animInfo2);
    DOREPLIFETIME(UAnimInstanceWithDependancy, m_animInfo3);
    DOREPLIFETIME(UAnimInstanceWithDependancy, m_animInfo4);
    DOREPLIFETIME(UAnimInstanceWithDependancy, m_V0Info);
    DOREPLIFETIME(UAnimInstanceWithDependancy, m_V1Info);
    DOREPLIFETIME(UAnimInstanceWithDependancy, m_V2Info);
    DOREPLIFETIME(UAnimInstanceWithDependancy, m_V3Info);
}

UAnimInstanceWithDependancy::UAnimInstanceWithDependancy() {
    this->m_MasterAnimInstance = NULL;
    this->m_bAnyAnimInProgress = false;
    this->m_eTransitionType = EMoveTransitionType::None;
    this->m_VariableWeightMasterStateName = TEXT("Master");
}

