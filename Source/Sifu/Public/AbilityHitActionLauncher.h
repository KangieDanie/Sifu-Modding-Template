#pragma once
#include "CoreMinimal.h"
#include "HitActionLauncher.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTag
#include "GameplayTagContainer.h"
#include "AbilityHitActionLauncher.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UAbilityHitActionLauncher : public UHitActionLauncher {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag m_InstigatorEventTag;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag m_VictimEventTag;
    
    UPROPERTY(EditAnywhere)
    bool m_bApplyDamage;
    
    UPROPERTY(EditAnywhere)
    bool m_bNotifyHitted;
    
    UPROPERTY(EditAnywhere)
    bool m_bApplyFreezeFrame;
    
    UAbilityHitActionLauncher();
};

