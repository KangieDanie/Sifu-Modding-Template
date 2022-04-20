#pragma once
#include "CoreMinimal.h"
#include "SCGameplayAbility.h"
#include "InputAction.h"
#include "UseInteractiveObjectAbility.generated.h"

UCLASS()
class SIFU_API UUseInteractiveObjectAbility : public USCGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<InputAction> m_eCarriedMovableInputs;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<InputAction> m_eMovableInputs;
    
public:
    UUseInteractiveObjectAbility();
};

