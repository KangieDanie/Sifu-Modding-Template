#include "VitalPointCheckCondition.h"

class AFightingCharacter;

bool UVitalPointCheckCondition::BPE_CanActivate_Implementation(const AFightingCharacter* _attacker, const AFightingCharacter* _defender) const {
    return false;
}

UVitalPointCheckCondition::UVitalPointCheckCondition() {
}

