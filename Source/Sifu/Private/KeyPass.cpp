#include "KeyPass.h"
#include "Net/UnrealNetwork.h"

class APlayerController;

void AKeyPass::UseInteractiveObject(APlayerController* _controller) {
}

void AKeyPass::On_RepCollected() {
}



void AKeyPass::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AKeyPass, m_bCollected);
}

AKeyPass::AKeyPass() {
    this->m_bCollected = false;
    this->m_bForAllPlayers = true;
}

