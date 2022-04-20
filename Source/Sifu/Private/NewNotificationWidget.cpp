#include "NewNotificationWidget.h"

void UNewNotificationWidget::OnStatsChanged() {
}

void UNewNotificationWidget::BPF_SetNotifyProgressionRewards(const TArray<ECharacterProgressionRewardTypes>& _rewards) {
}

void UNewNotificationWidget::BPF_SetNotifyNewSparePoints(bool _bNewSparePoints) {
}

void UNewNotificationWidget::BPF_SetNotifyNewAttacks(bool _bNotify) {
}

void UNewNotificationWidget::BPF_Initialize(const TArray<ECharacterProgressionRewardTypes>& _rewards, const FInventorySearchFilter& _inventoryFilter, const TArray<EButtonNotificationType>& _notifications) {
}

void UNewNotificationWidget::BPF_Init(TArray<ECharacterProgressionRewardTypes> _rewards, FInventorySearchFilter _inventoryFilter, bool _bNewSparePoints, bool _bNewAttacks, bool _bNewInventoryItems, bool _bNewEmotes, bool _bNewIntros) {
}


UNewNotificationWidget::UNewNotificationWidget() {
    this->m_eAttackLearningState = EAttackLearningState::None;
    this->m_bAlwaysVisible = false;
}

