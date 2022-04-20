#include "CameraLookAtServiceBehaviorTime.h"

FCameraLookAtServiceBehaviorTime::FCameraLookAtServiceBehaviorTime() {
    this->m_fReachDuration = 0.00f;
    this->m_CurveReachDurationPerAngleDiff = NULL;
    this->m_eReachBlendType = ESCBlendType::Linear;
    this->m_ReachCurveDynamic = NULL;
}

