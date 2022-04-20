#pragma once
#include "CoreMinimal.h"
#include "SCGameplayAbility.h"
#include "AttackAbility.generated.h"

UCLASS()
class UAttackAbility : public USCGameplayAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool m_bUseCameraForwardWhenNoTarget;
    
public:
    UAttackAbility();
};

