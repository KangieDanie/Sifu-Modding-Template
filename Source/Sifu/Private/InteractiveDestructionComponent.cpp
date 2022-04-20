#include "InteractiveDestructionComponent.h"

int32 UInteractiveDestructionComponent::BPF_GetStateIndex() const {
    return 0;
}

UInteractiveDestructionComponent::UInteractiveDestructionComponent() {
    this->m_iHitByCharaDamage = 1;
    this->m_iHitByObjectDamage = 1;
    this->m_DestroyedStaticMesh = NULL;
    this->m_DestroyedSkeletalMesh = NULL;
    this->m_bUseCustomCollisionProfile = false;
    this->m_fChunkDeactivationDelay = 3.00f;
}

