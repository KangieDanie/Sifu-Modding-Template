#include "WGGameFlowNode.h"

UWGGameFlowNode::UWGGameFlowNode() {
    this->m_eMenuToShow = EMenuEnum::None;
    this->m_eGameState = ESCGameInstanceState::Playing;
}

