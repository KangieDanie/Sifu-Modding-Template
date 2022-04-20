#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: GameplayAbilities AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "EHitDismissReason.h"
#include "AbilityTask_HandleDefense.generated.h"

class UAbilityTask_HandleDefense;
class UGameplayAbility;

UCLASS()
class SIFU_API UAbilityTask_HandleDefense : public UAbilityTask {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_HandleDefense* BPF_HandleDefense(UGameplayAbility* _owningAbility, EHitDismissReason _eDismissReason);
    
    UAbilityTask_HandleDefense();
};

