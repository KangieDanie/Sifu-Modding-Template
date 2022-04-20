#include "ThePlainesGameState.h"
#include "Net/UnrealNetwork.h"

void AThePlainesGameState::OnRepNumTeam() {
}

bool AThePlainesGameState::BPF_IsPvPGameMode() const {
    return false;
}

float AThePlainesGameState::BPF_GetTimeBeforeVanishActive() const {
    return 0.0f;
}

float AThePlainesGameState::BPF_GetRespawnTimeNoDown() const {
    return 0.0f;
}

EGameModeTypes AThePlainesGameState::BPF_GetGameModeType_Implementation() const {
    return EGameModeTypes::Mode1v1;
}

float AThePlainesGameState::BPF_GetDownTime() const {
    return 0.0f;
}

void AThePlainesGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AThePlainesGameState, m_iNumPlayersPerTeam);
    DOREPLIFETIME(AThePlainesGameState, m_bFriendlyFire);
    DOREPLIFETIME(AThePlainesGameState, m_uiLastHostZone);
    DOREPLIFETIME(AThePlainesGameState, m_iNumTeams);
    DOREPLIFETIME(AThePlainesGameState, m_bHasRunOnce);
    DOREPLIFETIME(AThePlainesGameState, m_ToSpawnFrom);
}

AThePlainesGameState::AThePlainesGameState() {
    this->m_iNumPlayersPerTeam = 1;
    this->m_bFriendlyFire = false;
    this->m_uiLastHostZone = 15;
    this->m_iNumTeams = 1;
    this->m_fTimeBeforeVanishActive = 0.00f;
    this->m_bShouldGiveXPOnKill = true;
    this->m_bHasRunOnce = false;
    this->m_eThresholdDangerState = EDangerStates::Safe;
    this->m_fReviveTime = 5.00f;
    this->m_fDeathRespawnTime = 5.00f;
    this->m_fReviveLifePercent = 0.30f;
    this->m_fDeathLifePercent = 1.00f;
    this->m_fRoomClearedLifePercent = 1.00f;
    this->m_fVanishTime = 4.00f;
    this->m_bCanGoDown = true;
    this->m_fDownTime = 3.00f;
    this->m_fRespawnTimeNoDown = 3.00f;
}

