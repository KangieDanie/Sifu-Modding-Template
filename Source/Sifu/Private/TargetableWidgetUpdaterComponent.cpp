#include "TargetableWidgetUpdaterComponent.h"

class AActor;
class UTargetableWidget;

void UTargetableWidgetUpdaterComponent::UnRegisterTargetActor(AActor* _actor) {
}

void UTargetableWidgetUpdaterComponent::RegisterTargetActor(AActor* _actor) {
}

void UTargetableWidgetUpdaterComponent::OnLeavingMap() {
}

void UTargetableWidgetUpdaterComponent::BPF_UpdateWidgetVisibility() {
}

UTargetableWidget* UTargetableWidgetUpdaterComponent::BPF_GetAssociatedWidget(AActor* _actor) {
    return NULL;
}

UTargetableWidgetUpdaterComponent::UTargetableWidgetUpdaterComponent() {
    this->m_TargetWidgetToUse = NULL;
    this->m_fMaxDisplayDist = 800.00f;
}

