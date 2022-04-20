#include "CameraRepulsionConfigElement.h"

FCameraRepulsionConfigElement::FCameraRepulsionConfigElement() {
    this->m_DeadZoneHidingAngleSizePerSafeZoneSizeFront = NULL;
    this->m_DeadZoneHidingAngleSizePerSafeZoneSizeBack = NULL;
    this->m_DeadZoneHidingSizeFactorPerDistanceToTargetFront = NULL;
    this->m_DeadZoneHidingSizeFactorPerDistanceToTargetBack = NULL;
    this->m_RepulsionSpringValuePerCameraRailCollisionRatio = NULL;
}

