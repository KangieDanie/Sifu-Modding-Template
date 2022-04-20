#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "MenuAsyncActionBaseHelper.generated.h"

class UMenuAsyncActionBase;

UCLASS(BlueprintType)
class SIFU_API UMenuAsyncActionBaseHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void BPF_CancelAsyncAction(UMenuAsyncActionBase* _action);
    
    UMenuAsyncActionBaseHelper();
};

