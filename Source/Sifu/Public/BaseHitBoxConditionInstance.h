#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseHitBoxConditionInstance.generated.h"

class UHitBoxCondition;

USTRUCT(BlueprintType)
struct SIFU_API FBaseHitBoxConditionInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UHitBoxCondition> m_DefaultClassObject;
    
    UPROPERTY(EditAnywhere, Instanced)
    UHitBoxCondition* m_Instance;
    
    FBaseHitBoxConditionInstance();
};

