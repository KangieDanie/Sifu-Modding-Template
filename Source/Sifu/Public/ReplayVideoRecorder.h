#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "ReplayVideoRecorder.generated.h"

class UWorld;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReplayVideoRecorder_OnVideoRecordingStarted, bool, bSuccess);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReplayVideoRecorder_OnVideoRecordingComplete, bool, bSuccess);

UCLASS()
class SIFU_API AReplayVideoRecorder : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FReplayVideoRecorder_OnVideoRecordingComplete m_OnVideoRecordingComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FReplayVideoRecorder_OnVideoRecordingStarted m_OnVideoRecordingStarted;
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveReplaySystemListeners();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_StartRecordingVideo();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnPlayBackCompleted(UWorld* _world);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnGoToTimeCompleted();
    
public:
    AReplayVideoRecorder();
};

