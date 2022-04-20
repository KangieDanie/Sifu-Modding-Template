#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "WidgetData.generated.h"

UCLASS(BlueprintType)
class UWidgetData : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void BPF_NotifyDataUpdated();
    
    UWidgetData();
};

