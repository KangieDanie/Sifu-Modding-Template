#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIConditionClassInstance.generated.h"

class UComboTransitionCondition;

USTRUCT(BlueprintType)
struct SIFU_API FAIConditionClassInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UComboTransitionCondition> m_DefaultClassObject;
    
    UPROPERTY(EditAnywhere, Instanced)
    UComboTransitionCondition* m_Instance;
    
    FAIConditionClassInstance();
};

