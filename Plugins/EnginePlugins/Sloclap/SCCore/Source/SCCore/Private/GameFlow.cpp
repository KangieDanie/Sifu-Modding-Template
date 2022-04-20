#include "GameFlow.h"

void UGameFlow::BPF_ResetMapOption() {
}

void UGameFlow::BPF_RemoveMapOption(FGameplayTag _optionToRemove) {
}

FGameplayTagContainer UGameFlow::BPF_GetMapOptions() const {
    return FGameplayTagContainer{};
}

void UGameFlow::BPF_AddMapOption(FGameplayTag _optionToAdd) {
}

UGameFlow::UGameFlow() {
    this->m_currentNode = NULL;
    this->m_pendingNode = NULL;
}

