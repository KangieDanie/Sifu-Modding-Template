#include "AISpawner.h"
#include "Templates/SubclassOf.h"

class ABaseWeapon;
class UAIPhaseScenario;
class ABaseCharacter;

void AAISpawner::OnAiBehaviorChanged(EGlobalBehaviors _eNewBehavior, const bool _bFromDialog) {
}

TSubclassOf<ABaseWeapon> AAISpawner::GetCarriedWeapon() const {
    return NULL;
}

void AAISpawner::BPF_WantsSpawn() {
}

void AAISpawner::BPF_UnSpawnAIDelayed() {
}

void AAISpawner::BPF_StartAssociatedPatrolOnSpawnedAI() {
}

void AAISpawner::BPF_SetSpawningClass(TSubclassOf<ABaseCharacter> _class) {
}

void AAISpawner::BPF_SetPhaseScenario(UAIPhaseScenario* _scenario) {
}

void AAISpawner::BPF_SetCanRespawn(bool _canRespawn) {
}

bool AAISpawner::BPF_HasSpawnedAI() const {
    return false;
}

TSubclassOf<ABaseCharacter> AAISpawner::BPF_GetSpawningClass() const {
    return NULL;
}

ABaseCharacter* AAISpawner::BPF_GetSpawnedAI() const {
    return NULL;
}

FName AAISpawner::BPF_GetCarriedWeaponPoolName() const {
    return NAME_None;
}

TArray<FCarriedProps> AAISpawner::BPF_GetCarriedProps() const {
    return TArray<FCarriedProps>();
}



AAISpawner::AAISpawner() {
    this->m_SpawningClass = NULL;
    this->m_bForcedPreFightLookAtTarget = false;
    this->m_ForcedPreFightLookAtTarget = NULL;
    this->m_pathPatrol = NULL;
    this->m_ePatrolLaunchMethod = EPatrolLaunchMethod::AtSpawn;
    this->m_PhaseScenario = NULL;
    this->m_eFaction = EFactionsEnums::Count;
    this->m_fRespawnTime = 0.10f;
    this->m_fSpawnDelay = 0.00f;
    this->m_bCanRespawn = true;
    this->m_bLowStructureOnSpawn = true;
    this->m_bIsLoneWolf = false;
    this->m_iSoundTensionLevelOverride = 0;
    this->m_iChargesToAddWhenKilled = 0;
    this->m_iDeathCounterDecreaseWhenKilled = 0;
    this->m_bDeathCounterResetWhenKilled = false;
    this->m_eFirstSpawnMethod = EFirstSpawnMethod::OnAnEvent;
    this->m_carriedWeapon = NULL;
    this->m_bKeepIdleAnimDuringAlertedDialogs = false;
    this->m_AIIdleDB = NULL;
}

