#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseActorCondition.h"
#include "BaseActorTargetConditionInstance.h"
#include "CharacterContextualObjectCondition.generated.h"

class UInteractionObjectComponent;

UCLASS()
class SIFU_API UCharacterContextualObjectCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bHasContextualObjectInRange;
    
    UPROPERTY(EditAnywhere)
    FBaseActorTargetConditionInstance m_ConditionOnObject;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UInteractionObjectComponent> m_CheckType;
    
    UCharacterContextualObjectCondition();
};

