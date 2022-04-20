#include "OrderServiceInstanceHelper.h"
#include "Templates/SubclassOf.h"

class UOrderComponent;
class UOrderService;

void UOrderServiceInstanceHelper::BPF_GetOrderInstanceInfos(const FBPOrderServiceInstance& _orderServiceInstance, uint8& _uiOutOrder, EOrderType& _eOutType, UOrderComponent*& _OrderComponent) {
}

UOrderService* UOrderServiceInstanceHelper::BPF_FindOrderServiceByClass(const FBPOrderServiceInstance& _myOrderServiceInstance, TSubclassOf<UOrderService> _class, FBPOrderServiceInstance& _resultOrderServiceInstance) {
    return NULL;
}

UOrderServiceInstanceHelper::UOrderServiceInstanceHelper() {
}

