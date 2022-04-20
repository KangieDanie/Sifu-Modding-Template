#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "OrderAnimSyncHelpers.generated.h"

UCLASS(BlueprintType)
class SIFU_API UOrderAnimSyncHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static int32 BPF_GenerateAnimSyncID();
    
    UOrderAnimSyncHelpers();
};

