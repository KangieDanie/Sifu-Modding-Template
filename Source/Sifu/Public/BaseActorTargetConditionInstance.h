#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseActorTargetConditionInstance.generated.h"

class UBaseActorTargetCondition;

USTRUCT(BlueprintType)
struct SIFU_API FBaseActorTargetConditionInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UBaseActorTargetCondition> m_DefaultClassObject;
    
    UPROPERTY(EditAnywhere, Instanced)
    UBaseActorTargetCondition* m_Instance;
    
    FBaseActorTargetConditionInstance();
};

