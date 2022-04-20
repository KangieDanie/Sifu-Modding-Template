#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EOrderType.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "BPOrderServiceInstance.h"
#include "OrderServiceInstanceHelper.generated.h"

class UOrderComponent;
class UOrderService;

UCLASS(BlueprintType)
class SIFU_API UOrderServiceInstanceHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static void BPF_GetOrderInstanceInfos(const FBPOrderServiceInstance& _orderServiceInstance, uint8& _uiOutOrder, EOrderType& _eOutType, UOrderComponent*& _OrderComponent);
    
    UFUNCTION(BlueprintCallable)
    static UOrderService* BPF_FindOrderServiceByClass(const FBPOrderServiceInstance& _myOrderServiceInstance, TSubclassOf<UOrderService> _class, FBPOrderServiceInstance& _resultOrderServiceInstance);
    
    UOrderServiceInstanceHelper();
};

