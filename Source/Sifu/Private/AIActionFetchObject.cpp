#include "AIActionFetchObject.h"

class UOrderComponent;
class AActor;

void UAIActionFetchObject::OnPickupStarting(uint8 _uiOrderId, UOrderComponent* _OrderComponent) {
}

void UAIActionFetchObject::BPF_SetObjectToFetch(AActor* _objectToFetch) {
}

UAIActionFetchObject::UAIActionFetchObject() {
    this->m_bFetchClosestWeaponIfNotSet = true;
    this->m_bUsePerceptionToFindWeapon = false;
    this->m_ObjectToFetch = NULL;
}

