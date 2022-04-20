#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: GameplayAbilities GameplayAbilityActorInfo
#include "Abilities/GameplayAbilityTypes.h"
#include "SCGameplayAbilityActorInfo.generated.h"

USTRUCT(BlueprintType)
struct FSCGameplayAbilityActorInfo : public FGameplayAbilityActorInfo {
    GENERATED_BODY()
public:
    SIFU_API FSCGameplayAbilityActorInfo();
};

