#include "GenericEnvironmentalInteractionComponent.h"

UGenericEnvironmentalInteractionComponent::UGenericEnvironmentalInteractionComponent() {
    this->m_bIgnoreNavMesh = false;
    this->m_eWallSide = EWallSide::AnyDirection;
    this->m_Settings = NULL;
}

