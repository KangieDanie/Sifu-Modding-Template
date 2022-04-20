#include "SpeedStateFromGoalDistSelector.h"

FSpeedStateFromGoalDistSelector::FSpeedStateFromGoalDistSelector() {
    this->m_eNearFromGoalSpeedState = ESpeedState::V0;
    this->m_fDistToGoalThresold = 0.00f;
    this->m_eFarFromGoalSpeedState = ESpeedState::V0;
}

