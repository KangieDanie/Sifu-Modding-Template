#include "OrderServiceActivationConditions.h"

class ABaseCharacter;

bool UOrderServiceActivationConditions::BPE_CanActivate_Implementation(uint8 _uiOrderId, const ABaseCharacter* _owner) const {
    return false;
}

UOrderServiceActivationConditions::UOrderServiceActivationConditions() {
}

