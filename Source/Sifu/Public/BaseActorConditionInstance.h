#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseActorConditionInstance.generated.h"

class UBaseActorCondition;

USTRUCT(BlueprintType)
struct SIFU_API FBaseActorConditionInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UBaseActorCondition> m_DefaultClassObject;
    
    UPROPERTY(EditAnywhere, Instanced)
    UBaseActorCondition* m_Instance;
    
    FBaseActorConditionInstance();
};

