#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintAsyncActionBase
#include "EMenuEnum.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MenuAsyncActionBase.generated.h"

UCLASS()
class UMenuAsyncActionBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void OnCurrentMenuChanged(EMenuEnum _ePrevMenu, EMenuEnum _eNewMenu);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_Cancel();
    
    UMenuAsyncActionBase();
};

