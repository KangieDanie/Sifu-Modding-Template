#include "IKSubAnimInstance.h"
#include "Net/UnrealNetwork.h"

void UIKSubAnimInstance::BPF_BindRepartitionProperty(FPropertyFloorBoneRepartition& _property) {
}

void UIKSubAnimInstance::BPF_BindProperty(FIKPropertyEvaluation& _fProperty, uint8 _uiEnum) {
}

void UIKSubAnimInstance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIKSubAnimInstance, m_FloorAngleToTarget);
}

UIKSubAnimInstance::UIKSubAnimInstance() {
    this->m_SlopeCurveName = TEXT("SlopeCurve");
}

