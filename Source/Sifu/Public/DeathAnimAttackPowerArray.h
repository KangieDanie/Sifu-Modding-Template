#pragma once
#include "CoreMinimal.h"
#include "DeathAnimAttackHeightArray.h"
#include "DeathAnimAttackPowerArray.generated.h"

USTRUCT(BlueprintType)
struct FDeathAnimAttackPowerArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDeathAnimAttackHeightArray m_Array[3];
    
    SIFU_API FDeathAnimAttackPowerArray();
};

