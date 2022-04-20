#pragma once
#include "CoreMinimal.h"
#include "SCGameplayAbility.h"
#include "SCGameplayAbilityActorInfo.h"
#include "DizzyReductionAbility.generated.h"

class UCurveFloat;

UCLASS()
class SIFU_API UDizzyReductionAbility : public USCGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_TimeReductionAsPercentCurve;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnDizzyReduction(const FSCGameplayAbilityActorInfo& _infos, float _fTimeLeft, float _fTimeReduced);
    
    UDizzyReductionAbility();
};

