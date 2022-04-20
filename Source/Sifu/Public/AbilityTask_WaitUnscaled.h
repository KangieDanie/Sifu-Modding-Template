#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: GameplayAbilities AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "AbilityTask_WaitUnscaled.generated.h"

class UGameplayAbility;
class UAbilityTask_WaitUnscaled;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAbilityTask_WaitUnscaled_OnFinish);

UCLASS()
class SIFU_API UAbilityTask_WaitUnscaled : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAbilityTask_WaitUnscaled_OnFinish m_OnFinish;
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitUnscaled* BPF_WaitUnscaled(UGameplayAbility* _owningAbility, float _fDuration);
    
    UAbilityTask_WaitUnscaled();
};

