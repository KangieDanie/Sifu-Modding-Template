#include "ProgressionRewardNotification.h"

class UCharacterProgressionUnlockDB;
class UProgressionRewardNotification;

UProgressionRewardNotification* UProgressionRewardNotification::BPF_Init(ECharacterProgressionRewardTypes _eRewardType, FCharacterProgressionReward _reward, UCharacterProgressionUnlockDB* _unlock) {
    return NULL;
}

UProgressionRewardNotification::UProgressionRewardNotification() {
    this->m_eRewardType = ECharacterProgressionRewardTypes::None;
    this->m_Unlock = NULL;
}

