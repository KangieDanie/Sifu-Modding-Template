#pragma once
#include "CoreMinimal.h"
#include "DeathAnimAttackPowerArray.h"
#include "DeathAnimQuadrantArray.generated.h"

USTRUCT()
struct FDeathAnimQuadrantArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDeathAnimAttackPowerArray m_Array[4];
    
    SIFU_API FDeathAnimQuadrantArray();
};

