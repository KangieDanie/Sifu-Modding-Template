#pragma once
#include "CoreMinimal.h"
#include "TargetForSlotsEnumHandler.h"
//CROSS-MODULE INCLUDE: GameplayAbilities AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "AbilityTask_HandleFocusBillboard.generated.h"

class AVitalPointActor;
class UGameplayAbility;
class UAbilityTask_HandleFocusBillboard;
class AAimingBillboardActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAbilityTask_HandleFocusBillboard_OnVitalPointSelected, AVitalPointActor*, _target);

UCLASS()
class SIFU_API UAbilityTask_HandleFocusBillboard : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAbilityTask_HandleFocusBillboard_OnVitalPointSelected m_OnVitalPointSelected;
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_HandleFocusBillboard* BPF_HandleFocusBillboard(UGameplayAbility* _owningAbility, const FTargetForSlotsEnumHandler& _focusTargetSlot);
    
    UFUNCTION(BlueprintPure)
    AAimingBillboardActor* BPF_GetAimedVitalPoint();
    
    UFUNCTION(BlueprintPure)
    AAimingBillboardActor* BPF_GetAimedBillboard();
    
    UAbilityTask_HandleFocusBillboard();
};

