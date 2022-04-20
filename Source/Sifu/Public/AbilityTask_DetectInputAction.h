#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: GameplayAbilities AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "InputContext.h"
#include "InputAction.h"
#include "AbilityTask_DetectInputAction.generated.h"

class UAbilityTask_DetectInputAction;
class UGameplayAbility;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAbilityTask_DetectInputAction_OnInputActionDetected);

UCLASS()
class SIFU_API UAbilityTask_DetectInputAction : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAbilityTask_DetectInputAction_OnInputActionDetected m_OnInputActionDetected;
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_DetectInputAction* BPF_DetectInputAction(UGameplayAbility* _owningAbility, InputAction _eAction, bool _bDetectDeactivation, bool _bEndTaskOnDetected, InputContext _eInputContext);
    
    UAbilityTask_DetectInputAction();
};

