#pragma once
#include "CoreMinimal.h"
#include "ChargedAttackNameByQuadrants.generated.h"

USTRUCT(BlueprintType)
struct FChargedAttackNameByQuadrants {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_Attacks[4];
    
    UPROPERTY()
    float m_StartRatio[4];
    
    SIFU_API FChargedAttackNameByQuadrants();
};

