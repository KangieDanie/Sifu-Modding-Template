#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EReplayKeyTypeFlag.h"
#include "ReplayTimelineController.generated.h"

class UReplayTimelineModel;
class UReplayKey;
class UReplayCutManagement;

UCLASS(BlueprintType)
class SIFU_API UReplayTimelineController : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UReplayCutManagement* m_CutManagement;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UReplayTimelineModel* m_Model;
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SaveKeys();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetTransitionContext();
    
    UFUNCTION(BlueprintPure)
    UReplayKey* BPF_GetCurrentKeyOfType(EReplayKeyTypeFlag _eTypeFlag) const;
    
    UReplayTimelineController();
};

