#pragma once
#include "CoreMinimal.h"
#include "AbilityDelegateHandler.generated.h"

class UGameplayAbility;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FAbilityDelegateHandler_OnActivated, UGameplayAbility*, _ability);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FAbilityDelegateHandler_OnDeactivated, UGameplayAbility*, _ability);

USTRUCT(BlueprintType)
struct SIFU_API FAbilityDelegateHandler {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FAbilityDelegateHandler_OnActivated> m_OnActivated;
    
    UPROPERTY()
    TArray<FAbilityDelegateHandler_OnDeactivated> m_OnDeactivated;
    
    FAbilityDelegateHandler();
};

