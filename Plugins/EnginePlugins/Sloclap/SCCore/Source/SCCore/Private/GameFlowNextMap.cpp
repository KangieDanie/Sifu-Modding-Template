#include "GameFlowNextMap.h"

UGameFlowNextMap::UGameFlowNextMap() {
    this->m_eTravelType = EGameFlowTravelType::SeamlessWithPreload;
    this->m_NextMapNode = NULL;
}

