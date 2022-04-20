#pragma once
#include "CoreMinimal.h"
#include "MenuAsyncActionBase.h"
#include "AsyncTaskWait.generated.h"

class UObject;
class UAsyncTaskWait;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncTaskWaitOnFinished);

UCLASS()
class UAsyncTaskWait : public UMenuAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskWaitOnFinished OnFinished;
    
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskWait* BPF_Wait(UObject* _menu, float _fDuration);
    
    UAsyncTaskWait();
};

