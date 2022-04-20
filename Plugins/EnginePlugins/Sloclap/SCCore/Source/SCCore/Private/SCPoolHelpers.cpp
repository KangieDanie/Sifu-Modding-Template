#include "SCPoolHelpers.h"

class AActor;

AActor* USCPoolHelpers::BPF_SpawnPoolableActor(AActor* _worldCtxt, UClass* _class, const FTransform& _transform, FName _poolName, bool _bGrow, bool _bFailIfNoPoolFound) {
    return NULL;
}

bool USCPoolHelpers::BPF_IsActorValid(const AActor* _actor) {
    return false;
}

bool USCPoolHelpers::BPF_IsActorPooled(const AActor* _actor, bool& _bOutIsActive) {
    return false;
}

void USCPoolHelpers::BPF_GetPoolContextInfos(UClass* _class, int32& _iActiveCount, int32& _iInativeActiveCount) {
}

void USCPoolHelpers::BPF_DestroyPoolableActor(AActor* _actor, bool& _bOutWasPooled) {
}

USCPoolHelpers::USCPoolHelpers() {
}

