#include "TargetableWidget.h"

class USceneComponent;
class AActor;
class UWidget;

void UTargetableWidget::BPF_SetRelatedActor(AActor* _actor) {
}

void UTargetableWidget::BPF_RemoveAttachedWidget(UWidget* _widget) {
}

AActor* UTargetableWidget::BPF_GetRelatedActor() {
    return NULL;
}

void UTargetableWidget::BPF_AddAttachedWidget(UWidget* _widget, FVector _vOffset3D, FVector2D _vOffset2D, USceneComponent* _sceneComponent, FName _socket) {
}





UTargetableWidget::UTargetableWidget() {
    this->m_bSetVisibleWhenRelatedActorSet = true;
}

