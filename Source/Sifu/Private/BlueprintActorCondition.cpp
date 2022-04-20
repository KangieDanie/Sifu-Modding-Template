#include "BlueprintActorCondition.h"

class AActor;

bool UBlueprintActorCondition::BPE_Evaluate_Implementation(const AActor* _actor) const {
    return false;
}

UBlueprintActorCondition::UBlueprintActorCondition() {
}

