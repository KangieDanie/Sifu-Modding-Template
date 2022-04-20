#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: GameplayAbilities GameplayAbilityTargetDataHandle
//#include "GameplayAbilityTargetDataHandle.h"
#include "CSCGameplayAbilityTargetDataLibrary.generated.h"

class AActor;

UCLASS(BlueprintType)
class UCSCGameplayAbilityTargetDataLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
  /*  UFUNCTION(BlueprintPure)
    static FGameplayAbilityTargetDataHandle BP_AbilityTargetDataWithTarget(AActor* _target);*/
    
    UCSCGameplayAbilityTargetDataLibrary();
};

