#include "BaseCharacter.h"

class UPrimitiveComponent;
class AActor;
class USocialComponent;
class UOrderComponent;
class UMaterialInstanceDynamic;

void ABaseCharacter::OnLandedRaw(const FHitResult& _Impact) {
}

void ABaseCharacter::OnCapsuleBeginOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult) {
}

bool ABaseCharacter::IsDead() const {
    return false;
}

void ABaseCharacter::BPF_UpdateDynamicMaterials(TArray<FDynamicMaterialInput> _ParametersInputs) {
}

void ABaseCharacter::BPF_SetVectorValueOnMaterials(FName _parameterName, FLinearColor _value) {
}

void ABaseCharacter::BPF_SetScalarValueOnMaterials(FName _parameterName, float _fValue) {
}

void ABaseCharacter::BPF_SetGenderInSave(ECharacterGender _eNewGender, bool _bSendTrackingData) {
}

bool ABaseCharacter::BPF_PopAvailabilityLayer(int32 _iId, InputContext _eInputContext) {
    return false;
}

bool ABaseCharacter::BPF_IsCurrentGameModeCoopAlly(AActor* _otherActor) {
    return false;
}

bool ABaseCharacter::BPF_IsAvailable(InputAction _eAction) const {
    return false;
}

USocialComponent* ABaseCharacter::BPF_GetSocialComponent() const {
    return NULL;
}

ERelationshipTypes ABaseCharacter::BPF_GetRelationship(AActor* _actor) {
    return ERelationshipTypes::Enemy;
}

UOrderComponent* ABaseCharacter::BPF_GetOrderComponent() const {
    return NULL;
}

ECharacterGender ABaseCharacter::BPF_GetGenderInSave() const {
    return ECharacterGender::Man;
}

TArray<UMaterialInstanceDynamic*> ABaseCharacter::BPF_GetCurrentMaterialInstances() {
    return TArray<UMaterialInstanceDynamic*>();
}

EControllerNature ABaseCharacter::BPF_GetControllerNature() const {
    return EControllerNature::Player;
}

void ABaseCharacter::BPF_CreateDynamicMaterials(EFXMaterials _eFxType, bool _bFromItemLoading) {
}




ABaseCharacter::ABaseCharacter() {
    this->m_iBuildUpMaxShrinkingFrames = 3;
    this->m_SkinTones = NULL;
    this->m_DialogComponent = NULL;
}

