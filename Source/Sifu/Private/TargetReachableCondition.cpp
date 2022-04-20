#include "TargetReachableCondition.h"

UTargetReachableCondition::UTargetReachableCondition() {
    this->m_fNavigationCostHeuristicScale = 3.00f;
    this->m_fMaxPathCost = 2000.00f;
    this->m_fMaxDistance = 400.00f;
    this->m_bOutOfNavmeshResult = false;
    this->m_QueryFilter = NULL;
    this->m_fMaxVerticalDistanceFromProjection = 50.00f;
}

