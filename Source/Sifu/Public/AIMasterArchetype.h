#pragma once
#include "CoreMinimal.h"
#include "SCAITriggerableActionsArray.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AIConditionedActionArray.h"
#include "EDefenseTactics.h"
#include "AIAttackReaction.h"
#include "AIActionReaction.h"
#include "AIMasterArchetype.generated.h"

UCLASS()
class SIFU_API UAIMasterArchetype : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<EDefenseTactics, FSCAITriggerableActionsArray> m_DefaultPostDefenseActions;
    
    UPROPERTY(EditAnywhere)
    TMap<EDefenseTactics, FAIConditionedActionArray> m_DefaultPostDefenseActionsMap;
    
    UPROPERTY(EditAnywhere)
    TArray<FAIAttackReaction> m_ReactionAttacks;
    
    UPROPERTY(EditAnywhere)
    TArray<FAIActionReaction> m_ReactionActions;
    
    UAIMasterArchetype();
};

