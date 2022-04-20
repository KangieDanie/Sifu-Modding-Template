#include "TraversalActor.h"

void ATraversalActor::BPE_GetTraversalAnimation_Implementation(FAnimContainer& _outResult) const {
}

ATraversalActor::ATraversalActor() {
    this->m_bTraversalActive = true;
    this->m_bOverrideTraversalEntryAngle = false;
    this->m_fTraversalEntryAngle = 180.00f;
    this->m_bOverrideTraversalExitAngle = false;
    this->m_fTraversalExitAngle = 180.00f;
    this->m_bHasForbiddenTraversalPart = false;
    this->m_eForbiddenAxis = ESimpleAxis::None;
    this->m_bUseEntryMaxDistFromTraversalCenter = false;
    this->m_fEntryMaxDistFromTraversalCenter = 0.00f;
    this->m_fLengthBetweenTwoNavLinks = 75.00f;
    this->m_fNavLinkOffsetFromBoxExtents = 50.00f;
    this->m_AllowedEntryTypes = 0;
}

