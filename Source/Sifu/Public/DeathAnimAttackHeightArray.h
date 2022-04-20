#pragma once
#include "CoreMinimal.h"
#include "DeathAnimAttackCardinalArray.h"
#include "DeathAnimAttackHeightArray.generated.h"

USTRUCT(BlueprintType)
struct FDeathAnimAttackHeightArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDeathAnimAttackCardinalArray m_Array[3];
    
    SIFU_API FDeathAnimAttackHeightArray();
};

