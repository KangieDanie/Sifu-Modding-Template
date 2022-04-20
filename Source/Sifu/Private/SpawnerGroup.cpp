#include "SpawnerGroup.h"
#include "Net/UnrealNetwork.h"

class AActor;
class UAIFightingComponent;

void ASpawnerGroup::BPF_TriggerBehaviorChange(AActor* _alertedBy, const EGlobalBehaviors _eNewBehavior, bool _bSkipBark) const {
}

void ASpawnerGroup::BPF_SpawnActors(int32 _iLevel, int32 _index, bool _bForce) {
}

int32 ASpawnerGroup::BPF_GetRemainingAICount(bool _bIncludeLinkedSpawner, bool _bIncludeAbandonningAIs) const {
    return 0;
}

int32 ASpawnerGroup::BPF_GetRemainingAI(TArray<UAIFightingComponent*>& _outAiComponents, bool _bAppendToArray, bool _bIncludeLinkedSpawner, bool _bIncludeAbandonningAIs) const {
    return 0;
}

void ASpawnerGroup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASpawnerGroup, m_SpawnersUsed);
}

ASpawnerGroup::ASpawnerGroup() {
    this->m_bAssignRolesDynamically = false;
    this->m_bUseDefaultReal = true;
    this->m_eJoinDialogActorsOnStart = EJoinDialogActors::All;
    this->m_dialogNavigationQueryFilter = NULL;
    this->m_bLookAtEnabledDuringDialog = true;
    this->m_bSkipSuspiciousOnDetection = false;
    this->m_bOverrideThreateningActions = false;
    this->m_uiThreateningActionsMask = 4294967295;
    this->m_eMCPresenceKnownType = EEnemyPresenceKnownType::Unknown;
}

