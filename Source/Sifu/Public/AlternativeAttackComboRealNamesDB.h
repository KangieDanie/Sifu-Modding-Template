#pragma once
#include "CoreMinimal.h"
#include "AlternativeAttackComboRealNamesDB.generated.h"

USTRUCT(BlueprintType)
struct FAlternativeAttackComboRealNamesDB {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame)
    FText m_Attacks[4];
    
    SIFU_API FAlternativeAttackComboRealNamesDB();
};

