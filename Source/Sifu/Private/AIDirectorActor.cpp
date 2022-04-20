#include "AIDirectorActor.h"

class AActor;

void AAIDirectorActor::BPF_UnbindFromAlertLevelChanged(FAIDirectorActorDelegate Delegate) {
}

void AAIDirectorActor::BPF_RemoveGlobalAlertLevelThreshold(FName _name) {
}

EAlertLevel AAIDirectorActor::BPF_GlobalAlertLevel() {
    return EAlertLevel::Normal;
}

EAlertLevel AAIDirectorActor::BPF_GetAlertLevel() const {
    return EAlertLevel::Normal;
}

void AAIDirectorActor::BPF_GetAIsForEnemy(const AActor* _enemyActor, ESCAICombatRoles _eCombatRole, TArray<AActor*>& _AICharactersOutArray) const {
}

void AAIDirectorActor::BPF_BindToAlertLevelChanged(FAIDirectorActorDelegate Delegate) {
}

void AAIDirectorActor::BPF_AddGlobalAlertLevelThreshold(EAlertLevel _eLevel, EAlertLevelThreshold _eType, FName _name) {
}
















AAIDirectorActor::AAIDirectorActor() {
}

