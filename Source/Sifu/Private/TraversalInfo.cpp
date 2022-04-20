#include "TraversalInfo.h"

FTraversalInfo::FTraversalInfo() {
    this->m_fTraversalLength = 0.00f;
    this->m_fTraversalHeight = 0.00f;
    this->m_eEntryType = ETraversalEntryType::None;
    this->m_eType = ECharacterTraversalType::Locomotion;
    this->m_bClimbWithFence = false;
    this->m_bTraversalOnStaticMesh = false;
}

