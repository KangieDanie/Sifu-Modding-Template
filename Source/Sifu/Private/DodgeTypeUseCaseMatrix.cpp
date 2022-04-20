#include "DodgeTypeUseCaseMatrix.h"

class UArchetypeAsset;

EDodgeDirectionType UDodgeTypeUseCaseMatrix::BPE_GetDodgeToUseFromHitbox_Implementation(const FHitBox& _hitbox, const UArchetypeAsset* _archetype) const {
    return EDodgeDirectionType::Side;
}

UDodgeTypeUseCaseMatrix::UDodgeTypeUseCaseMatrix() {
}

