#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "OrderTauntHelper.generated.h"

class AActor;

UCLASS(BlueprintType)
class SIFU_API UOrderTauntHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void BP_TriggerTauntEffects(AActor* _Instigator);
    
    UOrderTauntHelper();
};

