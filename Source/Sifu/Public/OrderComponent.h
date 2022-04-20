#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: SCCore SCPoolableActorComponent
#include "SCPoolableActorComponent.h"
#include "OrderInfosInstanceMap.h"
#include "OrderType.h"
#include "EOrderType.h"
#include "Buffer.h"
//CROSS-MODULE INCLUDE: Engine UniqueNetIdRepl
#include "OrderTransformData.h"
#include "EOrderAccessMode.h"
#include "OrderComponent.generated.h"

class UOrderDBSet;
class UOrderDelegateHandler;
class UOrderDB;

UCLASS(BlueprintType)
class SIFU_API UOrderComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UOrderDBSet>> m_OrderDBs;
    
private:
    UPROPERTY(Transient)
    FOrderInfosInstanceMap m_OrderServiceInstances;
    
    UPROPERTY(Transient)
    TMap<FOrderType, UOrderDelegateHandler*> m_OrderDelegateHandler;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdateOrder(uint8 _uiOrderId, EOrderType _eOrderType, FBuffer _ReplicatedBuffer, FUniqueNetIdRepl _callerPlayerId);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPlayOrder(EOrderType _eOrderType, uint8 _uiForcedID, FBuffer _ReplicatedBuffer, int64 _iTimeLaunch, uint8 _uiAfterOrder, FUniqueNetIdRepl _callerPlayerId, bool _bRemoteRunOnMaster, uint8 _uiOrderIDToInsertBefore, uint8 _uiReplaceInSequence);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCancelOrderByType(const FOrderType& _OrderType, bool _bCancelFirstOnly, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bFromServer, bool _bIncludeChildType);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCancelOrderByIDList(const TArray<uint8>& _OrderIDList, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bFromServer);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCancelOrderByID(uint8 _uiOrderId, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bRemoteRunOnMaster, bool _bFromServer);
    
    UFUNCTION(NetMulticast, Reliable)
    void MultiCastUpdateOrder(uint8 _uiOrderId, EOrderType _eOrderType, FBuffer _ReplicatedBuffer, FUniqueNetIdRepl _callerPlayerId);
    
    UFUNCTION(NetMulticast, Reliable)
    void MultiCastPlayOrder(EOrderType _eOrderType, uint8 _uiForcedID, FBuffer _ReplicatedBuffer, int64 _iTimeLaunch, uint8 _uiAfterOrder, FUniqueNetIdRepl _callerPlayerId, bool _bRemoteRunOnMaster, uint8 _uiOrderIDToInsertBefore, uint8 _uiReplaceInSequence);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void MultiCastFirstOrderTransformData(uint8 _uiOrderId, FOrderTransformData _orderTransformData);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void MultiCastCancelOrderByType(const FOrderType& _OrderType, bool _bCancelFirstOnly, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, const TArray<uint8>& _orderIdExceptions, bool _bIncludeChildType);
    
    UFUNCTION(NetMulticast, Reliable)
    void MultiCastCancelOrderByIDList(const TArray<uint8>& _OrderIDList, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId);
    
    UFUNCTION(NetMulticast, Reliable)
    void MultiCastCancelOrderByID(uint8 _uiOrderId, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bRemoteRunOnMaster);
    
public:
    UFUNCTION(BlueprintPure)
    UOrderDelegateHandler* GetOrderDelegates(const FOrderType& _OrderType);
    
private:
    UFUNCTION(Client, Reliable)
    void ClientPlayOrderRejected(uint8 _uiOrderId);
    
public:
    UFUNCTION(BlueprintPure)
    bool BPF_IsOrderRunningWithID(uint8 _uiID, EOrderAccessMode _eAccessMode) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsOrderRunning(const FOrderType& _OrderType, EOrderAccessMode _eAccessMode, bool _bStillInRunningPhase, bool _bIncludeChildType) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsLastActionOrderPlayedInMirror() const;
    
    UFUNCTION(BlueprintPure)
    TArray<uint8> BPF_GetRunningAndPendingActionOrders(bool _bStillInRunningPhase) const;
    
    UFUNCTION(BlueprintPure)
    EOrderType BPF_GetOrderTypeFromOrderID(uint8 _uiOrderId) const;
    
    UFUNCTION(BlueprintPure)
    uint8 BPF_GetOrderIDFromType(EOrderType _eOrderType, bool& _bFound, EOrderAccessMode _eAccessMode, bool _bStillInRunningPhase);
    
    UFUNCTION(BlueprintPure)
    UOrderDelegateHandler* BPF_GetOrderDelegates(EOrderType _eOrderType);
    
    UFUNCTION(BlueprintPure)
    UOrderDB* BPF_GetOrderDB(FOrderType _OrderType) const;
    
    UFUNCTION(BlueprintPure)
    uint8 BPF_GetLastActionOrderId() const;
    
    UFUNCTION(BlueprintPure)
    FOrderType BPF_GetBPOrderTypeFromOrderID(uint8 _uiOrderId) const;
    
    UFUNCTION(BlueprintPure)
    UOrderDelegateHandler* BPF_GetBPOrderDelegates(FName _BPOrderType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_CancelAllOrders();
    
    UOrderComponent();
    
    // Fix for true pure virtual functions not being implemented
};

