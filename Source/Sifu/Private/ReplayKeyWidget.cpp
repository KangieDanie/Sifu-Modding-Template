#include "ReplayKeyWidget.h"

class UReplayKey;

void UReplayKeyWidget::BPE_OnSelectionUpdate_Implementation(UReplayKey* _key, bool _bIsSelected) {
}

void UReplayKeyWidget::BPE_OnHoveringStateUpdate_Implementation(UReplayKey* _key, bool _bIsHovered) {
}


UReplayKeyWidget::UReplayKeyWidget() {
    this->m_bIsKeySelected = false;
    this->m_bIsKeyHovered = false;
    this->m_VisualsDB = NULL;
    this->m_Key = NULL;
    this->m_bCachedTimelineIsOutOfBounds = false;
}

