#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SCLevelStreamingManagerHelpers.generated.h"

UCLASS(BlueprintType)
class SCCORE_API USCLevelStreamingManagerHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void BPF_SetStreamingVolumesEnabled(bool _bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_BlockLoadingsOnNextUpdate();
    
    USCLevelStreamingManagerHelpers();
};

