#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "ELimbs.h"
#include "LimbsHelper.generated.h"

UCLASS(BlueprintType)
class SIFU_API ULimbsHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static ELimbs BPF_Mirror(ELimbs _eLimb, bool _bMirror);
    
    ULimbsHelper();
};

