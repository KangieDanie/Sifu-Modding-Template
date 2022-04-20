#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: GameplayAbilities GameplayAttribute
#include "AttributeSet.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "SCGameplayAbilityLibrary.generated.h"

class AActor;

UCLASS(BlueprintType)
class USCGameplayAbilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void BPF_SetFloatAttribute(const AActor* _actor, FGameplayAttribute _attribute, float _fDefaultValue);
    
    UFUNCTION(BlueprintPure)
    static float BPF_GetFloatAttribute(const AActor* _actor, FGameplayAttribute _attribute, float _fDefaultValue);
    
    USCGameplayAbilityLibrary();
};

