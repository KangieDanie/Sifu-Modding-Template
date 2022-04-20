#include "SCDialogWidget.h"

void USCDialogWidget::BPF_RemoveAllDelegates() {
}

bool USCDialogWidget::BPF_IsRuleFulfilled(const FSCConversationRule& _rule) {
    return false;
}

void USCDialogWidget::BPF_InteractiveDialogTimerExpired() {
}

void USCDialogWidget::BPF_DialogSelected(int32 _iIndex) {
}

bool USCDialogWidget::BPF_AreRulesFulfilled(const TArray<FSCConversationRule>& _rules) {
    return false;
}

void USCDialogWidget::BPF_AddAllDelegates() {
}









USCDialogWidget::USCDialogWidget() {
    this->m_bHandleShowSubtitleOption = true;
}

