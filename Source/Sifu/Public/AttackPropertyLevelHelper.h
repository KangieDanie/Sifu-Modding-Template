#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "AttackPropertyLevel.h"
#include "EHitBoxAttackProperties.h"
#include "AttackPropertyLevelHelper.generated.h"

UCLASS(BlueprintType)
class SIFU_API UAttackPropertyLevelHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static int32 BPF_GetAttackPropertyLevel(const FAttackPropertyLevel& _attackPropertyLevel, EHitBoxAttackProperties _eProperty);
    
    UAttackPropertyLevelHelper();
};

