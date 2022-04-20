#include "ComboTransitionCondition.h"
#include "Templates/SubclassOf.h"

class UComboTransitionCondition;
class AActor;
class AFightingCharacter;

bool UComboTransitionCondition::BPF_TestConditionOfClass(TSubclassOf<UComboTransitionCondition> _condition, const AFightingCharacter* _owner) {
    return false;
}

bool UComboTransitionCondition::BPF_TestCondition(const UComboTransitionCondition* _condition, const AFightingCharacter* _owner) {
    return false;
}

uint8 UComboTransitionCondition::BPE_GetTargetNode_Implementation(const AFightingCharacter* _owner, const AActor* _target) const {
    return 0;
}

FString UComboTransitionCondition::BPE_GetLog_Implementation() const {
    return TEXT("");
}

UComboTransitionCondition::UComboTransitionCondition() {
}

