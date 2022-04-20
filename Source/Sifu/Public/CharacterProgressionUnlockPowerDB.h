#pragma once
#include "CoreMinimal.h"
#include "CharacterProgressionUnlockDB.h"
#include "CharacterProgressionUnlockPowerDB.generated.h"

UCLASS()
class SIFU_API UCharacterProgressionUnlockPowerDB : public UCharacterProgressionUnlockDB {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_iCharacterBuildPowerIndex;
    
    UPROPERTY(EditAnywhere)
    FText m_NotificationText;
    
    UCharacterProgressionUnlockPowerDB();
};

