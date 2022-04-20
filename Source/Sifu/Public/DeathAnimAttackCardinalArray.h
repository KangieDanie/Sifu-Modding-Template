#pragma once
#include "CoreMinimal.h"
#include "DeathAnimAttackCardinalArray.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FDeathAnimAttackCardinalArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimSequence* m_Array[4];
    
    SIFU_API FDeathAnimAttackCardinalArray();
};

