#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: GameplayAbilities AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "EALPriority.h"
#include "EALBinaryOperation.h"
#include "AbilityTask_PushAvailabilityLayers.generated.h"

class UAvailabilityLayerData;
class UAbilityTask_PushAvailabilityLayers;
class UGameplayAbility;

UCLASS()
class SIFU_API UAbilityTask_PushAvailabilityLayers : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAvailabilityLayerData* m_availabilityLayerData;
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_PushAvailabilityLayers* BPF_PushAvailabilityLayerWithContext(UGameplayAbility* _owningAbility, UAvailabilityLayerData* _AvailabilityLayerData, EALBinaryOperation _eOperation, int32 m_iPriority, bool _bPushContext, EALPriority _eContextPriority);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_PushAvailabilityLayers* BPF_PushAvailabilityLayer(UGameplayAbility* _owningAbility, UAvailabilityLayerData* _AvailabilityLayerData, EALBinaryOperation _eOperation, int32 m_iPriority);
    
    UAbilityTask_PushAvailabilityLayers();
};

