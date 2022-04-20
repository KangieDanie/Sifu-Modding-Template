#include "ProgressionDoorNotification.h"

class UQuestItemData;
class UProgressionDoorNotification;

UProgressionDoorNotification* UProgressionDoorNotification::BPF_Init(const FProgressionDoorStruct& _progressionDoorStruct, UQuestItemData* _lastFulfilledQuest) {
    return NULL;
}

UProgressionDoorNotification::UProgressionDoorNotification() {
    this->m_LastFulfilledQuest = NULL;
}

