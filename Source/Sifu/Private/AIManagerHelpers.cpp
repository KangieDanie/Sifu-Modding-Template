#include "AIManagerHelpers.h"

class AActor;
class AAIDirectorActor;
class UAIFightingComponent;
class AAISituationActor;

void UAIManagerHelpers::BPF_SetAIPositioningOptionToggled(const AActor* _targetActor, EAIPositioningOption _eOption, bool _bToggled) {
}

bool UAIManagerHelpers::BPF_IsAIPositioningOptionToggled(const AActor* _targetActor, EAIPositioningOption _eOption) {
    return false;
}

void UAIManagerHelpers::BPF_GetRemainingAisInActiveSituations(TArray<UAIFightingComponent*>& _outAiComponents) {
}

int32 UAIManagerHelpers::BPF_GetRawLastManGauge() {
    return 0;
}

AAIDirectorActor* UAIManagerHelpers::BPF_GetDirectorActor() {
    return NULL;
}

float UAIManagerHelpers::BPF_GetDifficultyLevelGauge() {
    return 0.0f;
}

void UAIManagerHelpers::BPF_GetAllActiveAiSituations(TArray<AAISituationActor*>& _outAiSituations) {
}

AActor* UAIManagerHelpers::BPF_GetAiSituationNamedActor(const UAIFightingComponent* _aiComponent, const FAISituationNamedActor& _name) {
    return NULL;
}

void UAIManagerHelpers::BPF_GetAiSituationActors(TArray<AAISituationActor*>& _outAiSituations, const UAIFightingComponent* _aiComponent, bool _bIncludeAlertedSpawners) {
}

UAIManagerHelpers::UAIManagerHelpers() {
}

