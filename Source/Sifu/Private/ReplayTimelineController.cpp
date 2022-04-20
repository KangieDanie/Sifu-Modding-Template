#include "ReplayTimelineController.h"

class UReplayKey;

void UReplayTimelineController::BPF_SaveKeys() {
}

void UReplayTimelineController::BPF_ResetTransitionContext() {
}

UReplayKey* UReplayTimelineController::BPF_GetCurrentKeyOfType(EReplayKeyTypeFlag _eTypeFlag) const {
    return NULL;
}

UReplayTimelineController::UReplayTimelineController() {
    this->m_Model = NULL;
}

