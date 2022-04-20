#include "TraversalNavLinkCustomComponent.h"

UTraversalNavLinkCustomComponent::UTraversalNavLinkCustomComponent() {
    this->m_uiCurrentTraversalVersion = 0;
    this->m_eExternalLinkBehavior = ELinkWithExternalBehavior::ActiveIfExternalActive;
}

