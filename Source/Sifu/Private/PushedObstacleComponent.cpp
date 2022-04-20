#include "PushedObstacleComponent.h"

class AFightingCharacter;


EPushObstacleReaction UPushedObstacleComponent::BPE_GetPushReaction_Implementation(AFightingCharacter* _pushedPlayer) {
    return EPushObstacleReaction::WallSplash;
}

bool UPushedObstacleComponent::BPE_GetPushInterruptionHit_Implementation(AFightingCharacter* _interruptedCharacter, FHitBox& _inOutResult) {
    return false;
}

UPushedObstacleComponent::UPushedObstacleComponent() {
    this->m_bActive = true;
    this->m_ePushReaction = EPushObstacleReaction::ObstacleDestructionByHitbox;
}

