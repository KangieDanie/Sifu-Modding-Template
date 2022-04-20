#include "SkillTree.h"
#include "Templates/SubclassOf.h"

class USkillGameplayEffect;
class UCurveFloat;

void ASkillTree::BPF_UpdateTreeOverTime(const TArray<TSubclassOf<USkillGameplayEffect>>& _prevUnlockedSkills, const TArray<TSubclassOf<USkillGameplayEffect>>& _newUnlockedSkills, float _fDuration, UCurveFloat* _floatCurve, FSkillTreeOnFinished _onFinished) {
}

void ASkillTree::BPF_SetTreeState(const TArray<TSubclassOf<USkillGameplayEffect>>& _unlockedSkills) {
}

void ASkillTree::BPF_BlendTreeState(const TArray<TSubclassOf<USkillGameplayEffect>>& _prevSkills, const TArray<TSubclassOf<USkillGameplayEffect>>& _newSkills, float _fAlpha) {
}


ASkillTree::ASkillTree() {
    this->m_SkillsDB = NULL;
}

