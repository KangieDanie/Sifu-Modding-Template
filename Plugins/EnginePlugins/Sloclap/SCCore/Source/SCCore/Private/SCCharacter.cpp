#include "SCCharacter.h"
#include "Net/UnrealNetwork.h"

class UAnimSequence;
class AActor;
class USkeletalMesh;

void ASCCharacter::ServerSetGender_Implementation(ECharacterGender _eGender) {
}
bool ASCCharacter::ServerSetGender_Validate(ECharacterGender _eGender) {
    return true;
}

void ASCCharacter::OnRep_SetGender() {
}

void ASCCharacter::BPF_Unspawn(UAnimSequence* _animation, bool _bMirror, bool _bInstantUnspawn) {
}

void ASCCharacter::BPF_SetMesh(USkeletalMesh* _newMesh, bool _bSwapOnlyRendering) {
}

void ASCCharacter::BPF_SetCollisionEnabled(bool _bEnabled, bool _bKeepStaticMeshCollisions) {
}

ETextGender ASCCharacter::BPF_GetTextGender() const {
    return ETextGender::Masculine;
}

FName ASCCharacter::BPF_GetImpostorName() const {
    return NAME_None;
}

ECharacterGender ASCCharacter::BPF_GetGender() const {
    return ECharacterGender::Man;
}

void ASCCharacter::BPF_AddObjectToKeepAttachedOnImpostor(AActor* _actor, EAttachmentRule _eAttachmentRules, FName _boneName) {
}


void ASCCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASCCharacter, m_eGender);
}

ASCCharacter::ASCCharacter() {
    this->m_bCanUnspawn = true;
    this->m_bCanSpawnImpostor = true;
    this->m_bIsPooled = false;
    this->m_PoseDataClass = NULL;
    this->m_bDontCreateClotOnLowerEndPlatforms = false;
    this->m_eGender = ECharacterGender::Man;
}

