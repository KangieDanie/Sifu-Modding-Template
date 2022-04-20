#include "ReplayScreenshotUserWidget.h"

class ABaseReplayController;

void UReplayScreenshotUserWidget::BPF_RequestScreenshot(int32 _iResolutionX, int32 _iResolutionY) {
}

ABaseReplayController* UReplayScreenshotUserWidget::BPF_GetReplayController() const {
    return NULL;
}

void UReplayScreenshotUserWidget::BPE_OnScreenshotRequestProcessed_Implementation() {
}


UReplayScreenshotUserWidget::UReplayScreenshotUserWidget() {
    this->m_bTakeScreenshotOnCooldown = false;
}

