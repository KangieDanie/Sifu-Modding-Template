#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCGameplayEffect
#include "SCGameplayEffect.h"
#include "ECharacterStat.h"
#include "SkillGameplayEffect.generated.h"

UCLASS()
class SIFU_API USkillGameplayEffect : public USCGameplayEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iSkillPointCost;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<int32> m_ConsolidationSkillPointCosts;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECharacterStat m_eStatUsedToUnlockSkill;
    
    USkillGameplayEffect();
};

