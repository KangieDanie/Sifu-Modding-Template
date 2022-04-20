#pragma once
#include "CoreMinimal.h"
#include "AttackPropertyLevel.h"
#include "AttackPropertyResistanceMatrixByFightingState.generated.h"

USTRUCT(BlueprintType)
struct FAttackPropertyResistanceMatrixByFightingState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAttackPropertyLevel m_Matrix[9];
    
    SIFU_API FAttackPropertyResistanceMatrixByFightingState();
};

