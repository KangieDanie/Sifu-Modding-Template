#include "TraversalComponent.h"

void UTraversalComponent::ComputeTraversalAIInfo() {
}

void UTraversalComponent::BPF_SetTraversalActive(bool _bActive, bool _bForce) {
}

bool UTraversalComponent::BPF_IsTraversalActive() const {
    return false;
}

bool UTraversalComponent::BPF_IsEntryTypeAllowed(ETraversalEntryType _eEntryType) const {
    return false;
}

bool UTraversalComponent::BPF_IsAnimDrivenCameraForced() const {
    return false;
}



UTraversalComponent::UTraversalComponent() {
    this->m_bTraversalActive = true;
    this->m_bOverrideTraversalEntryAngle = false;
    this->m_fTraversalEntryAngle = 180.00f;
    this->m_bOverrideTraversalExitAngle = false;
    this->m_fTraversalExitAngle = 180.00f;
    this->m_eForbiddenAxis = ESimpleAxis::None;
    this->m_eAuthorizedAxisSide = ESimpleAxisSide::BothSides;
    this->m_bUseEntryMaxDistFromTraversalCenter = false;
    this->m_fEntryMaxDistFromTraversalCenter = 0.00f;
    this->m_fLengthBetweenTwoNavLinks = 75.00f;
    this->m_AllowedEntryTypes = 0;
    this->m_bIsLethal = false;
    this->m_cinematicNavAreaClass = NULL;
    this->m_bUseMeshAsTraversalCollider = false;
    this->m_bUseRushInput = false;
    this->m_bForceUseAnimDrivenCamera = false;
    this->m_bCustomNavLinkCooldownDuration = false;
    this->m_fNavLinkCooldownDuration = 0.00f;
}

