#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "OrderDelegateHandler.generated.h"

//class UOrderComponent;
//
//UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOrderDelegateHandler_OnStarting, uint8, _ID, UOrderComponent*, _OrderComponent);
//UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOrderDelegateHandler_OnStarted, uint8, _ID, UOrderComponent*, _OrderComponent);
//UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOrderDelegateHandler_OnCanceled, uint8, _ID, UOrderComponent*, _OrderComponent);
//UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOrderDelegateHandler_OnEnding, uint8, _ID, UOrderComponent*, _OrderComponent);
//UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOrderDelegateHandler_OnEnded, uint8, _ID, UOrderComponent*, _OrderComponent);

UCLASS()
class SIFU_API UOrderDelegateHandler : public UObject {
    GENERATED_BODY()
public:
    //UPROPERTY(BlueprintAssignable)
    //FOrderDelegateHandler_OnStarting m_OnStarting;
    //
    //UPROPERTY(BlueprintAssignable)
    //FOrderDelegateHandler_OnStarted m_OnStarted;
    //
    //UPROPERTY(BlueprintAssignable)
    //FOrderDelegateHandler_OnEnding m_OnEnding;
    //
    //UPROPERTY(BlueprintAssignable)
    //FOrderDelegateHandler_OnEnded m_OnEnded;
    //
    //UPROPERTY(BlueprintAssignable)
    //FOrderDelegateHandler_OnCanceled m_OnCanceled;
    
    UOrderDelegateHandler();
};

