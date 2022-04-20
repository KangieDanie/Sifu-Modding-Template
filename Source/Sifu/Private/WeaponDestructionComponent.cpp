#include "WeaponDestructionComponent.h"

int32 UWeaponDestructionComponent::BPF_GetNumDamagedWeaponIndex() const {
    return 0;
}

int32 UWeaponDestructionComponent::BPF_GetDamagedWeaponIndex() const {
    return 0;
}

UWeaponDestructionComponent::UWeaponDestructionComponent() {
    this->m_fDelayForCurrentOrderStop = 0.30f;
}

