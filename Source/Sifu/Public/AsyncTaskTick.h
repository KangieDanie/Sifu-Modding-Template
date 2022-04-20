#pragma once
#include "CoreMinimal.h"
#include "MenuAsyncActionBase.h"
#include "AsyncTaskTick.generated.h"

class UAsyncTaskTick;
class UObject;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FAsyncTaskTickOnTick, UAsyncTaskTick*, _task, float, _fDeltaTime, float, _fProgress, float, _fTotalTime);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FAsyncTaskTickOnFinished, UAsyncTaskTick*, _task, float, _fDeltaTime, float, _fProgress, float, _fTotalTime);

UCLASS()
class UAsyncTaskTick : public UMenuAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskTickOnTick OnTick;
    
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskTickOnFinished OnFinished;
    
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskTick* BPF_Tick(UAsyncTaskTick* _existingTask, UObject* _menu, float _fFrequency, float _fDuration);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Stop();
    
    UAsyncTaskTick();
};

