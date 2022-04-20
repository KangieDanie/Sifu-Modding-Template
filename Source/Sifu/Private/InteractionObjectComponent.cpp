#include "InteractionObjectComponent.h"

class USceneComponent;
class UPrimitiveComponent;

void UInteractionObjectComponent::ForceUse() {
}

void UInteractionObjectComponent::BPF_SetVisualComponent(USceneComponent* _component) {
}

void UInteractionObjectComponent::BPF_SetMainDetectionPrimitive(UPrimitiveComponent* _component) {
}

void UInteractionObjectComponent::BPF_SetIsUsable(bool _bCanUse) {
}

void UInteractionObjectComponent::BPF_SetInteractionTextStruct(const FInteractionTextStruct& _struct) {
}

bool UInteractionObjectComponent::BPF_IsUsingLockedText() const {
    return false;
}

bool UInteractionObjectComponent::BPF_IsUsable() const {
    return false;
}

USceneComponent* UInteractionObjectComponent::BPF_GetVisualComponent() const {
    return NULL;
}

FText UInteractionObjectComponent::BPF_GetLockedText() const {
    return FText::GetEmpty();
}

FInteractionTextStruct UInteractionObjectComponent::BPF_GetInteractionTextStruct() const {
    return FInteractionTextStruct{};
}

UInteractionObjectComponent::UInteractionObjectComponent() {
    this->m_bUseCustomWalkInteractionDist = false;
    this->m_fCustomWalkInteractionDist = 0.00f;
    this->m_bUseCustomRunInteractionDist = false;
    this->m_fCustomRunInteractionDist = 0.00f;
    this->m_bIgnoreOwnerOnHint = true;
    this->m_bIgnoreChildActorsOnTrace = false;
    this->m_orderParams = NULL;
    this->m_bVisibleOnlyWhenUsable = false;
    this->m_bIsUsable = true;
    this->m_bUseLockedText = false;
    this->m_bUseGenericUI = true;
    this->m_iPriority = 0;
    this->m_bUseInteractionHint = false;
    this->m_bOverrideInteractionHintDistance = false;
    this->m_fInteractionHintDistanceOverride = 0.00f;
    this->m_bConstraintToViewport = false;
}

