#pragma once
#include "CoreMinimal.h"
#include "AttackUnlockProgress.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAttackUnlockProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    int32 m_iXP;
    
    FAttackUnlockProgress();
};

