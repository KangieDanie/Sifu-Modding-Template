#include "WallJumpGeneratorComponent.h"

UWallJumpGeneratorComponent::UWallJumpGeneratorComponent() {
    this->m_fMinWallLength = 100.00f;
    this->m_fDetectionDistance = 1000.00f;
    this->m_fMaxSegmentVerticalAngle = 8.00f;
    this->m_fLeanHeight = 150.00f;
    this->m_fMaxWallAngleDegree = 10.00f;
    this->m_iWallActorCount = 5;
    this->m_ActorClass = NULL;
}

