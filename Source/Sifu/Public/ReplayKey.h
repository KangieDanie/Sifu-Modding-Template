#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EReplayKeyIndexUpdateReason.h"
#include "ReplayKeyData.h"
#include "ReplayKey.generated.h"

class UReplayKey;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReplayKey_OnSelectionUpdate, UReplayKey*, _key, bool, _bIsSelected);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReplayKey_OnDataUpdate, UReplayKey*, _key, const FReplayKeyData&, _previousData);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReplayKey_OnPostDelete, UReplayKey*, _key);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReplayKey_OnDelete, UReplayKey*, _key);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FReplayKey_OnIndexUpdate, UReplayKey*, _key, int32, _previousIndex, EReplayKeyIndexUpdateReason, _eReason);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReplayKey_OnHoveredUpdate, UReplayKey*, _key, bool, _bIsHovered);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReplayKey_OnTransitionUpdate, UReplayKey*, _key, bool, _bIsOnTransition);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReplayKey_OnTimeUpdate, UReplayKey*, _key, float, _fTime);

UCLASS(BlueprintType)
class SIFU_API UReplayKey : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    FReplayKeyData m_Data;
    
public:
    UPROPERTY(BlueprintAssignable, Transient)
    FReplayKey_OnDelete m_OnDelete;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FReplayKey_OnPostDelete m_OnPostDelete;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FReplayKey_OnIndexUpdate m_OnIndexUpdate;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FReplayKey_OnDataUpdate m_OnDataUpdate;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FReplayKey_OnTransitionUpdate m_OnTransitionUpdate;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FReplayKey_OnSelectionUpdate m_OnSelectionUpdate;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FReplayKey_OnHoveredUpdate m_OnHoveredUpdate;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FReplayKey_OnTimeUpdate m_OnTimeUpdate;
    
protected:
    UFUNCTION(BlueprintPure)
    static bool BPF_HasReplayKeyType(int32 _iKeyTypeFlags, int32 _iContainsKeyTypeFlags);
    
public:
    UReplayKey();
};

