#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: GameplayTags GameplayTag
#include "GameplayTagContainer.h"
#include "SCAbilitySystemComponentHelper.generated.h"

class USCAbilitySystemComponent;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FSCAbilitySystemComponentHelperDelegate, USCAbilitySystemComponent*, _abilityComponent, const FGameplayTag&, _tag, int32, _iCount);

UCLASS(BlueprintType)
class SIFU_API USCAbilitySystemComponentHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void BPF_AssignOnPlayerTagsChangedDelegate(const FGameplayTag& _matching, const FSCAbilitySystemComponentHelperDelegate& _delegate);
    
    USCAbilitySystemComponentHelper();
};

