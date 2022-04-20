#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTag
//#include "GameplayTagContainer.h"
#include "AICustomBehaviorTree.generated.h"

class UBehaviorTree;

USTRUCT(BlueprintType)
struct FAICustomBehaviorTree {
    GENERATED_BODY()
public:
   /* UPROPERTY(EditAnywhere)
    FGameplayTag m_DynamicBehaviorGameplayTag;*/
    
    UPROPERTY(EditAnywhere)
    UBehaviorTree* m_BehaviorToUse;
    
    SIFU_API FAICustomBehaviorTree();
};

