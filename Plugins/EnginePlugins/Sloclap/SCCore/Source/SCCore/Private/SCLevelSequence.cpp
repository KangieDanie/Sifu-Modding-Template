#include "SCLevelSequence.h"

class UAnimMontage;
class AActor;
class UAnimSequence;
class ACharacter;
class APlayerController;
class USCLevelSequenceDirectorData;
class ACameraActor;
class ULevelSequence;
class ASCSequenceAnchor;
class UMaterialParameterCollection;

void USCLevelSequence::OnPreStop() {
}

void USCLevelSequence::OnPlay() {
}

void USCLevelSequence::OnPause() {
}

void USCLevelSequence::OnFinished() {
}

void USCLevelSequence::OnAnyCharacterPlayMontage(UAnimMontage* _playedMontageToPlay) {
}

void USCLevelSequence::BPF_UnregisterCharacter(FName _roleName) {
}

void USCLevelSequence::BPF_TeleportToActor(const AActor* _actor) {
}

void USCLevelSequence::BPF_TeleportTo(const FVector& _location, const FRotator& _rotation, bool _bAddLocation) {
}

void USCLevelSequence::BPF_RemoveMaterialParameterBinding(int32 _iHandle) {
}

APlayerController* USCLevelSequence::BPF_PlayerController() const {
    return NULL;
}

ESCSequenceBlendViewState USCLevelSequence::BPF_GetViewBlendState() const {
    return ESCSequenceBlendViewState::ToSequence;
}

FName USCLevelSequence::BPF_GetRoleFromActor(AActor* _actor) const {
    return NAME_None;
}

USCLevelSequenceDirectorData* USCLevelSequence::BPF_GetData() const {
    return NULL;
}

ACharacter* USCLevelSequence::BPF_GetCharacterOwner() const {
    return NULL;
}

ACameraActor* USCLevelSequence::BPF_GetCamera() {
    return NULL;
}

UAnimSequence* USCLevelSequence::BPF_GetAnimSequenceFromLevelSequence(const ULevelSequence* _levelSequence, FName _roleName) {
    return NULL;
}

ASCSequenceAnchor* USCLevelSequence::BPF_GetAnchor() {
    return NULL;
}

AActor* USCLevelSequence::BPF_GetActorFromRole(FName _roleName) {
    return NULL;
}

void USCLevelSequence::BPF_BlendToSequenceView(float _fTime) {
}

void USCLevelSequence::BPF_BlendToPlayerView(float _fTime) {
}

int32 USCLevelSequence::BPF_AddMaterialParameterBinding(UMaterialParameterCollection* _collection, FName _parameterName, ESequenceBindingType _eBinding) {
    return 0;
}



USCLevelSequence::USCLevelSequence() {
    this->m_DataAsset = NULL;
    this->m_ActorCamera = NULL;
    this->m_ActorAnchor = NULL;
}

