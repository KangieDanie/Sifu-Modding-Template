#include "SCCharacterImpostor.h"
#include "Net/UnrealNetwork.h"

void ASCCharacterImpostor::OnMimicCharacterReplicateMulticast_Implementation(const FSCSpawnImpostorInfos& _spawnInfos) {
}


void ASCCharacterImpostor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASCCharacterImpostor, m_AnimInstance);
}

ASCCharacterImpostor::ASCCharacterImpostor() {
    this->m_SpawnTransformType = EImposterSpawnTransformType::Actor;
    this->m_RagdollConfig = NULL;
    this->m_AnimInstance = NULL;
}

