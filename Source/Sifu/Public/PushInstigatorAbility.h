#pragma once
#include "CoreMinimal.h"
#include "SCGameplayAbilityActivationInfo.h"
#include "SCGameplayAbility.h"
#include "PushInstigatorAbility.generated.h"

class UPushConfiguration;

UCLASS()
class UPushInstigatorAbility : public USCGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced)
    UPushConfiguration* m_PushConfiguration;
    
    UFUNCTION(BlueprintCallable)
    void BPF_HandleDefaultPush(const FSCGameplayAbilityActivationInfo& _activationInfo);
    
public:
    UPushInstigatorAbility();
};

