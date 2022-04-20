#include "TakedownInstigatorAbility.h"

UTakedownInstigatorAbility::UTakedownInstigatorAbility() {
    this->m_fSearchWallRadius = 200.00f;
    this->m_fSearchMarginFromWallEdge = 100.00f;
    this->m_fSnapMarginFromWallEdge = 30.00f;
    this->m_fMaxDistFromWall = -10.00f;
    this->m_fMaxSnapDistance = 140.00f;
    this->m_WallEnvHitBoneName = TEXT("custom_joint_06");
    this->m_fMaxAngleWithNavMeshDeg = 10.00f;
    this->m_bHandleEnvironmentalInteractionComponents = false;
}

