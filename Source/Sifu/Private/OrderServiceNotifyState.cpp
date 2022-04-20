#include "OrderServiceNotifyState.h"
#include "Templates/SubclassOf.h"

class UOrderService;

TSubclassOf<UOrderService> UOrderServiceNotifyState::GetServiceClass(bool _bIncludeInstanced) const {
    return NULL;
}

UOrderServiceNotifyState::UOrderServiceNotifyState() {
    this->m_bTickFrozen = false;
    this->m_ServiceClass = NULL;
    this->m_ServiceInstanced = NULL;
    this->m_activationCondition = NULL;
}

