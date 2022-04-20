#include "AIActionTriggerProxy.h"

class AActor;

void UAIActionTriggerProxy::BPF_TriggerProxy() {
}

void UAIActionTriggerProxy::BPF_SetProxyActorToTrigger(AActor* _proxyActor) {
}

UAIActionTriggerProxy::UAIActionTriggerProxy() {
    this->m_bTriggerProxyDirectlyAtStart = false;
}

