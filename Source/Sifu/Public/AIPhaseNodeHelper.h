#pragma once
#include "CoreMinimal.h"
#include "AIPhaseNodeHardLink.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "AIPhaseNodeHelper.generated.h"

UCLASS(BlueprintType)
class SIFU_API UAIPhaseNodeHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static int32 BPF_GetPhaseNodeIndex(const FAIPhaseNodeHardLink& _nodeHardLink);
    
    UAIPhaseNodeHelper();
};

