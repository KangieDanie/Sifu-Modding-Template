#include "CharacterProgressionDB.h"

class UProgressionDoorData;
class UQuestItemData;

ECharacterProgressionRewardTypes UCharacterProgressionDB::BPF_GetProgressionRewardForSchoolLevel(int32 _iSchoolLevel) {
    return ECharacterProgressionRewardTypes::Grab;
}

FCharacterProgressionReward UCharacterProgressionDB::BPF_GetProgressionReward(ECharacterProgressionRewardTypes _type) {
    return FCharacterProgressionReward{};
}

FProgressionDoorStruct UCharacterProgressionDB::BPF_GetProgressionDoorStructByQuestItem(UQuestItemData* _questItemData) {
    return FProgressionDoorStruct{};
}

FProgressionDoorStruct UCharacterProgressionDB::BPF_GetProgressionDoorStructByDoorData(UProgressionDoorData* _progressionDoorData) {
    return FProgressionDoorStruct{};
}

void UCharacterProgressionDB::BPF_GetNextProgressionRewards(ECharacterProgressionRewardConditions _condition, const int32& _iValue, TArray<FCharacterProgressionReward>& _result) const {
}

UCharacterProgressionDB::UCharacterProgressionDB() {
    this->m_uiAttackXPOnTargetted = 50;
    this->m_uiAttackXPOnHit = 35;
    this->m_uiAttackXPOnGuard = 50;
    this->m_uiAttackXPOnDodge = 50;
    this->m_uiAttackXPOnParry = 75;
    this->m_uiAttackXPOnAvoid = 75;
    this->m_uiAttackXPOnAbsorb = 75;
    this->m_uiOffenseAttackXPOnHit = 35;
    this->m_uiOffenseAttackXPOnGuarded = 50;
    this->m_uiOffenseAttackXPOnPerfectLink = 50;
    this->m_uiOffenseAttackXPOnAbsorb = 50;
    this->m_uiOffenseAttackXPOnGuardBreak = 50;
    this->m_iCairnsToOpen = 27;
}

