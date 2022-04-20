#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagContainer
#include "GameplayTagContainer.h"
#include "VitalPointCheckCondition.generated.h"

class AFightingCharacter;

UCLASS(Blueprintable)
class SIFU_API UVitalPointCheckCondition : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_attackerRequiredTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_defenderRequiredTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_defenderForbiddenTags;
    
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool BPE_CanActivate(const AFightingCharacter* _attacker, const AFightingCharacter* _defender) const;
    
    UVitalPointCheckCondition();
};

