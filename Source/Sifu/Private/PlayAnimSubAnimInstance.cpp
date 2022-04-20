#include "PlayAnimSubAnimInstance.h"
#include "Net/UnrealNetwork.h"


void UPlayAnimSubAnimInstance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlayAnimSubAnimInstance, m_uiSubStateId);
    DOREPLIFETIME(UPlayAnimSubAnimInstance, m_eOrderType);
    DOREPLIFETIME(UPlayAnimSubAnimInstance, m_AnimContainerToPlay);
    DOREPLIFETIME(UPlayAnimSubAnimInstance, m_iSubStateID);
    DOREPLIFETIME(UPlayAnimSubAnimInstance, m_uiOrderID);
    DOREPLIFETIME(UPlayAnimSubAnimInstance, m_fGlobalAlpha);
    DOREPLIFETIME(UPlayAnimSubAnimInstance, m_bIKEnabled);
}

UPlayAnimSubAnimInstance::UPlayAnimSubAnimInstance() {
    this->m_uiSubStateId = 0;
    this->m_eOrderType = EOrderType::None;
    this->m_IKSubInstanceTag = TEXT("IK");
    this->m_iSubStateID = 0;
    this->m_uiOrderID = 0;
    this->m_fGlobalAlpha = 0.00f;
    this->m_bIKEnabled = false;
}

