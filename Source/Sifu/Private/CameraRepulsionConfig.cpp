#include "CameraRepulsionConfig.h"

FCameraRepulsionConfig::FCameraRepulsionConfig() {
    this->m_fRepulsionSleepTimerAfterManualCam = 0.00f;
    this->m_fDeadZoneHidingTargetPositionSpringSpeed = 0.00f;
    this->m_fCollidingDeadZoneExtraAngleOffset = 0.00f;
    this->m_fLookAtYawDampingValueThisFrameToDisableRepulsion = 0.00f;
    this->m_fCollisionRailRatioToActivateRepulsionFromCollidingDeadZone = 0.00f;
    this->m_bUseMergedDeadZonesWhenRepulsingFromOnlyHidingZone = false;
}

