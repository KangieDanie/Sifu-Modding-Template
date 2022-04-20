#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "ReplayKeyData.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Quat
#include "ReplayTimelineModel.generated.h"

class UReplayKey;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReplayTimelineModel_OnKeyAdded, UReplayKey*, _key, bool, _bCanSelectKey);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReplayTimelineModel_OnKeyRemoved, UReplayKey*, _key);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReplayTimelineModel_OnRecalcDilatedTime, int32, iRecalcStartIndex);

UCLASS(BlueprintType, Config=Replay)
class SIFU_API UReplayTimelineModel : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, Transient)
    FReplayTimelineModel_OnKeyAdded m_OnKeyAdded;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FReplayTimelineModel_OnKeyRemoved m_OnKeyRemoved;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FReplayTimelineModel_OnRecalcDilatedTime m_OnRecalcDilatedTime;
    
protected:
    UPROPERTY()
    TArray<UReplayKey*> m_Keys;
    
public:
    UFUNCTION(BlueprintCallable)
    static void BPF_UpdateKeyLocationData(UReplayKey* _key, const FVector& _vLocation, const FQuat& _qRotation);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_UpdateKeyData(UReplayKey* _key, const FReplayKeyData& _data);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SaveState();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_RecalcDilatedTimes(int32 _iStartingIndex);
    
public:
    UFUNCTION(BlueprintPure)
    bool BPF_IsBoundaryKey(int32 _iIndex) const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool BPF_HasUndoStateAvailable() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_HasRedoStateAvailable() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool BPF_HasKey(int32 _iKeyIndex) const;
    
    UFUNCTION(BlueprintPure)
    UReplayKey* BPF_GetPreviousKey(const UReplayKey* _key) const;
    
    UFUNCTION(BlueprintPure)
    UReplayKey* BPF_GetNextKey(const UReplayKey* _key) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UReplayKey*> BPF_GetKeys();
    
    UFUNCTION(BlueprintPure)
    UReplayKey* BPF_GetKeyAtKeyFrameIndex(int32 _iKeyFrameIndex) const;
    
    UFUNCTION(BlueprintPure)
    UReplayKey* BPF_GetKey(int32 _iIndex) const;
    
    UReplayTimelineModel();
};

