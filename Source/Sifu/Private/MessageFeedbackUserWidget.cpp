#include "MessageFeedbackUserWidget.h"

bool UMessageFeedbackUserWidget::BPF_IsActive() const {
    return false;
}


UMessageFeedbackUserWidget::UMessageFeedbackUserWidget() {
    this->m_Controller = NULL;
    this->m_eShowForReason = EMessageReason::None;
}

