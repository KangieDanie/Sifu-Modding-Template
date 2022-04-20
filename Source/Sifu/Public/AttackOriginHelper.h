#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "EAttackOrigin.h"
#include "AttackOriginHelper.generated.h"

UCLASS(BlueprintType)
class SIFU_API UAttackOriginHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static EAttackOrigin BPF_Mirror(EAttackOrigin _eAttackOrigin, bool _bMirror);
    
    UAttackOriginHelper();
};

