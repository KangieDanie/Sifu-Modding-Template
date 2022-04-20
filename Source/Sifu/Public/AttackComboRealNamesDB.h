#pragma once
#include "CoreMinimal.h"
#include "MainAttackComboRealNamesDB.h"
#include "AlternativeAttackComboRealNamesDB.h"
#include "AttackComboRealNamesDB.generated.h"

USTRUCT()
struct FAttackComboRealNamesDB {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame)
    FMainAttackComboRealNamesDB m_MainAttacksComboNamesDB[2];
    
    UPROPERTY(EditAnywhere, SaveGame)
    FAlternativeAttackComboRealNamesDB m_AlternativeAttacksComboNamesDB[5];
    
    SIFU_API FAttackComboRealNamesDB();
};

