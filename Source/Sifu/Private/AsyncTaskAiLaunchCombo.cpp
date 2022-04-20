#include "AsyncTaskAiLaunchCombo.h"
#include "Templates/SubclassOf.h"

class UAIActionLaunchCombo;
class UAIFightingComponent;
class UAsyncTaskAiLaunchCombo;

UAsyncTaskAiLaunchCombo* UAsyncTaskAiLaunchCombo::BPF_AIAction_LaunchCombo(UAIFightingComponent* _aiComponent, TSubclassOf<UAIActionLaunchCombo> _actionClass, const FAIComboLaunchParameters& _parameters, UAIActionLaunchCombo*& _action) {
    return NULL;
}

UAsyncTaskAiLaunchCombo::UAsyncTaskAiLaunchCombo() {
}

