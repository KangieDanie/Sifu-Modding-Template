#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: GameplayAbilities GameplayEffectContext
#include "GameplayEffectTypes.h"
#include "HitDescription.h"
#include "HitActionLauncherContext.generated.h"

USTRUCT(BlueprintType)
struct FHitActionLauncherContext : public FGameplayEffectContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FHitDescription m_hitDescription;
    
    SIFU_API FHitActionLauncherContext();
};

