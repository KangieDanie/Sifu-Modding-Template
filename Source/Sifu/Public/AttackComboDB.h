#pragma once
#include "CoreMinimal.h"
#include "MainAttackComboDB.h"
#include "AlternativeAttackComboDB.h"
#include "AttackComboDB.generated.h"

USTRUCT(BlueprintType)
struct FAttackComboDB {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame)
    FMainAttackComboDB m_MainAttacksComboDB[2];
    
    UPROPERTY(EditAnywhere, SaveGame)
    FAlternativeAttackComboDB m_AlternativeAttacksComboDB[5];
    
    SIFU_API FAttackComboDB();
};

