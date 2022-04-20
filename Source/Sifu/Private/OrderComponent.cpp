#include "OrderComponent.h"

class UOrderDelegateHandler;
class UOrderDB;

void UOrderComponent::ServerUpdateOrder_Implementation(uint8 _uiOrderId, EOrderType _eOrderType, FBuffer _ReplicatedBuffer, FUniqueNetIdRepl _callerPlayerId) {
}
bool UOrderComponent::ServerUpdateOrder_Validate(uint8 _uiOrderId, EOrderType _eOrderType, FBuffer _ReplicatedBuffer, FUniqueNetIdRepl _callerPlayerId) {
    return true;
}

void UOrderComponent::ServerPlayOrder_Implementation(EOrderType _eOrderType, uint8 _uiForcedID, FBuffer _ReplicatedBuffer, int64 _iTimeLaunch, uint8 _uiAfterOrder, FUniqueNetIdRepl _callerPlayerId, bool _bRemoteRunOnMaster, uint8 _uiOrderIDToInsertBefore, uint8 _uiReplaceInSequence) {
}
bool UOrderComponent::ServerPlayOrder_Validate(EOrderType _eOrderType, uint8 _uiForcedID, FBuffer _ReplicatedBuffer, int64 _iTimeLaunch, uint8 _uiAfterOrder, FUniqueNetIdRepl _callerPlayerId, bool _bRemoteRunOnMaster, uint8 _uiOrderIDToInsertBefore, uint8 _uiReplaceInSequence) {
    return true;
}

void UOrderComponent::ServerCancelOrderByType_Implementation(const FOrderType& _OrderType, bool _bCancelFirstOnly, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bFromServer, bool _bIncludeChildType) {
}
bool UOrderComponent::ServerCancelOrderByType_Validate(const FOrderType& _OrderType, bool _bCancelFirstOnly, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bFromServer, bool _bIncludeChildType) {
    return true;
}

void UOrderComponent::ServerCancelOrderByIDList_Implementation(const TArray<uint8>& _OrderIDList, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bFromServer) {
}
bool UOrderComponent::ServerCancelOrderByIDList_Validate(const TArray<uint8>& _OrderIDList, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bFromServer) {
    return true;
}

void UOrderComponent::ServerCancelOrderByID_Implementation(uint8 _uiOrderId, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bRemoteRunOnMaster, bool _bFromServer) {
}
bool UOrderComponent::ServerCancelOrderByID_Validate(uint8 _uiOrderId, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bRemoteRunOnMaster, bool _bFromServer) {
    return true;
}

void UOrderComponent::MultiCastUpdateOrder_Implementation(uint8 _uiOrderId, EOrderType _eOrderType, FBuffer _ReplicatedBuffer, FUniqueNetIdRepl _callerPlayerId) {
}

void UOrderComponent::MultiCastPlayOrder_Implementation(EOrderType _eOrderType, uint8 _uiForcedID, FBuffer _ReplicatedBuffer, int64 _iTimeLaunch, uint8 _uiAfterOrder, FUniqueNetIdRepl _callerPlayerId, bool _bRemoteRunOnMaster, uint8 _uiOrderIDToInsertBefore, uint8 _uiReplaceInSequence) {
}

void UOrderComponent::MultiCastFirstOrderTransformData_Implementation(uint8 _uiOrderId, FOrderTransformData _orderTransformData) {
}

void UOrderComponent::MultiCastCancelOrderByType_Implementation(const FOrderType& _OrderType, bool _bCancelFirstOnly, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, const TArray<uint8>& _orderIdExceptions, bool _bIncludeChildType) {
}

void UOrderComponent::MultiCastCancelOrderByIDList_Implementation(const TArray<uint8>& _OrderIDList, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId) {
}

void UOrderComponent::MultiCastCancelOrderByID_Implementation(uint8 _uiOrderId, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bRemoteRunOnMaster) {
}

UOrderDelegateHandler* UOrderComponent::GetOrderDelegates(const FOrderType& _OrderType) {
    return NULL;
}

void UOrderComponent::ClientPlayOrderRejected_Implementation(uint8 _uiOrderId) {
}

bool UOrderComponent::BPF_IsOrderRunningWithID(uint8 _uiID, EOrderAccessMode _eAccessMode) const {
    return false;
}

bool UOrderComponent::BPF_IsOrderRunning(const FOrderType& _OrderType, EOrderAccessMode _eAccessMode, bool _bStillInRunningPhase, bool _bIncludeChildType) const {
    return false;
}

bool UOrderComponent::BPF_IsLastActionOrderPlayedInMirror() const {
    return false;
}

TArray<uint8> UOrderComponent::BPF_GetRunningAndPendingActionOrders(bool _bStillInRunningPhase) const {
    return TArray<uint8>();
}

EOrderType UOrderComponent::BPF_GetOrderTypeFromOrderID(uint8 _uiOrderId) const {
    return EOrderType::Attack;
}

uint8 UOrderComponent::BPF_GetOrderIDFromType(EOrderType _eOrderType, bool& _bFound, EOrderAccessMode _eAccessMode, bool _bStillInRunningPhase) {
    return 0;
}

UOrderDelegateHandler* UOrderComponent::BPF_GetOrderDelegates(EOrderType _eOrderType) {
    return NULL;
}

UOrderDB* UOrderComponent::BPF_GetOrderDB(FOrderType _OrderType) const {
    return NULL;
}

uint8 UOrderComponent::BPF_GetLastActionOrderId() const {
    return 0;
}

FOrderType UOrderComponent::BPF_GetBPOrderTypeFromOrderID(uint8 _uiOrderId) const {
    return FOrderType{};
}

UOrderDelegateHandler* UOrderComponent::BPF_GetBPOrderDelegates(FName _BPOrderType) {
    return NULL;
}

void UOrderComponent::BPF_CancelAllOrders() {
}

UOrderComponent::UOrderComponent() {
}

