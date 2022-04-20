#include "AIBehaviorSwitchActorComponent.h"

class AActor;

void UAIBehaviorSwitchActorComponent::OnComponentStartOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void UAIBehaviorSwitchActorComponent::BPF_TriggerBehaviorChangeToAssociatedGroups(AActor* _actorTriggeringTheAlert, bool _bSkipBark) const {
}

UAIBehaviorSwitchActorComponent::UAIBehaviorSwitchActorComponent() {
    this->m_AlertOnPrimitiveOverlap = true;
    this->m_eNewBehavior = EGlobalBehaviors::Alerted;
}

