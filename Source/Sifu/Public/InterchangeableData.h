#pragma once
#include "CoreMinimal.h"
#include "BaseActorConditionInstance.h"
#include "InterchangeableData.generated.h"

class UGenericInputData;

USTRUCT(BlueprintType)
struct FInterchangeableData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBaseActorConditionInstance m_condition;
    
    UPROPERTY(EditAnywhere)
    UGenericInputData* m_Data;
    
    SIFU_API FInterchangeableData();
};

