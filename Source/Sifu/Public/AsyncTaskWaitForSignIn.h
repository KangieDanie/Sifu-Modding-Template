#pragma once
#include "CoreMinimal.h"
#include "MenuAsyncActionBase.h"
#include "AsyncTaskWaitForSignIn.generated.h"

class UAsyncTaskWaitForSignIn;
class UObject;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncTaskWaitForSignInOnSuccess, const FText&, _error);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncTaskWaitForSignInOnFail, const FText&, _error);

UCLASS()
class UAsyncTaskWaitForSignIn : public UMenuAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskWaitForSignInOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskWaitForSignInOnFail OnFail;
    
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskWaitForSignIn* BPF_WaitForSignIn(UObject* _menu);
    
    UAsyncTaskWaitForSignIn();
};

