#include "AbilityTask_PushAvailabilityLayers.h"

class UGameplayAbility;
class UAvailabilityLayerData;
class UAbilityTask_PushAvailabilityLayers;

UAbilityTask_PushAvailabilityLayers* UAbilityTask_PushAvailabilityLayers::BPF_PushAvailabilityLayerWithContext(UGameplayAbility* _owningAbility, UAvailabilityLayerData* _AvailabilityLayerData, EALBinaryOperation _eOperation, int32 m_iPriority, bool _bPushContext, EALPriority _eContextPriority) {
    return NULL;
}

UAbilityTask_PushAvailabilityLayers* UAbilityTask_PushAvailabilityLayers::BPF_PushAvailabilityLayer(UGameplayAbility* _owningAbility, UAvailabilityLayerData* _AvailabilityLayerData, EALBinaryOperation _eOperation, int32 m_iPriority) {
    return NULL;
}

UAbilityTask_PushAvailabilityLayers::UAbilityTask_PushAvailabilityLayers() {
    this->m_availabilityLayerData = NULL;
}

