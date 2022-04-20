#include "RunReactionBTTaskNode.h"

URunReactionBTTaskNode::URunReactionBTTaskNode() {
    this->m_NextBehavior = EGlobalBehaviors::Idle;
    this->m_BehaviorToTest = EGlobalBehaviors::Idle;
    this->m_eActionState = EFightingActionState::Reaction;
}

