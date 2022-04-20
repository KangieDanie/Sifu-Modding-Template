#include "BaseEnvironmentalInteractionComponent.h"

class AFightingCharacter;


EPushObstacleReaction UBaseEnvironmentalInteractionComponent::BPE_GetPushReaction_Implementation(const AFightingCharacter* _Instigator, const AFightingCharacter* _takenDown) {
    return EPushObstacleReaction::WallSplash;
}

bool UBaseEnvironmentalInteractionComponent::BPE_CanTakeDown_Implementation(AFightingCharacter* _Instigator, AFightingCharacter* _takenDown) {
    return false;
}

UBaseEnvironmentalInteractionComponent::UBaseEnvironmentalInteractionComponent() {
    this->m_bActive = true;
    this->m_eReaction = EPushObstacleReaction::WallSplash;
    this->m_uiAllowedInteractionTypes = 3;
}

