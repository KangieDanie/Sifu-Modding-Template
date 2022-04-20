#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: GameplayAbilities AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "AbilityTask_SlowMotionTask.generated.h"

class UCurveFloat;
class UAbilityTask_SlowMotionTask;
class UGameplayAbility;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAbilityTask_SlowMotionTask_OnFinish);

UCLASS()
class SIFU_API UAbilityTask_SlowMotionTask : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY()
    UCurveFloat* m_Curve;
    
    UPROPERTY(BlueprintAssignable)
    FAbilityTask_SlowMotionTask_OnFinish m_OnFinish;
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_SlowMotionTask* BPF_SlowMotionTask(UGameplayAbility* _owningAbility, UCurveFloat* _curve, float _fScale, float _fBlendDuration, float _fCameraSlowMotionFactor, bool _bBlockOthers, bool _bScaleInputStack);
    
    UAbilityTask_SlowMotionTask();
};

