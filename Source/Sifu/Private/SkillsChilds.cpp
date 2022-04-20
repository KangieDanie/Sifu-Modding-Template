#include "SkillsChilds.h"

class USkillsChilds;
class USCAbilitySystemComponent;

bool USkillsChilds::BPF_GetParent(const FSkillTreeNode& _node, FSkillTreeNode& _parent) const {
    return false;
}

bool USkillsChilds::BPF_FindSkillBySocket(FName _socketName, FSkillTreeNode& _node) const {
    return false;
}

void USkillsChilds::BPF_FindChilds(USCAbilitySystemComponent* _component, const FSkillFilter& _filter, TArray<FSkillTreeNode>& _result, const USkillsChilds* _rootToEnumerateVirtualChilds, bool _bStopOnFilterFailed) const {
}

void USkillsChilds::BPF_FindChild(USCAbilitySystemComponent* _component, const FSkillFilter& _filter, FSkillTreeNode& _result, const USkillsChilds* _rootToEnumerateVirtualChilds) const {
}

void USkillsChilds::BPF_EnumerateChilds(USCAbilitySystemComponent* _component, const FSkillFilter& _filter, FSkillsChildsEnumerator _enumerator, const USkillsChilds* _rootToEnumerateVirtualChilds, bool _bStopOnFilterFailed) const {
}

int32 USkillsChilds::BPF_CountChilds(USCAbilitySystemComponent* _component, const FSkillFilter& _filter, bool _bStopOnFilterFailed) const {
    return 0;
}

USkillsChilds::USkillsChilds() {
}

