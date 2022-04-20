#include "AsyncTaskTagChanged.h"

class UAbilitySystemComponent;
class UAsyncTaskTagChanged;

UAsyncTaskTagChanged* UAsyncTaskTagChanged::ListenForTagsChange(UAbilitySystemComponent* _abilitySystemComponent, FGameplayTagContainer _tags) {
    return NULL;
}

void UAsyncTaskTagChanged::EndTask() {
}

UAsyncTaskTagChanged::UAsyncTaskTagChanged() {
    this->m_ASC = NULL;
}

