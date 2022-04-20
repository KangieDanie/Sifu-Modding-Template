#include "SkillButton.h"

class ASkillTree;

void USkillButton::BPF_UpdateButtonLocation(ASkillTree* SkillTree) {
}

void USkillButton::BPF_SetSkillTreeNode(const FSkillTreeNode& _node) {
}

void USkillButton::BPF_GetSkillTreeNode(FSkillTreeNode& _node) {
}

USkillButton::USkillButton() {
    this->m_bUdateParallax = true;
    this->m_GameplayEffect = NULL;
    this->m_DB = NULL;
}

