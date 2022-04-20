#include "ReplayTimelineControl.h"

FReplayTimelineControl::FReplayTimelineControl() {
    this->m_fMinInputTimeS = 0.00f;
    this->m_fCursorMaxSpeed = 0.00f;
    this->m_fCursorBaseSpeed = 0.00f;
    this->m_Curve = NULL;
    this->m_fCursorMaxSpeedReachedTimeS = 0.00f;
}

