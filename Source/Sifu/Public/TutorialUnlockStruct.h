#pragma once
#include "CoreMinimal.h"
#include "ETutorialUnlockState.h"
#include "TutorialUnlockStruct.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FTutorialUnlockStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    ETutorialUnlockState m_eUnlockState;
    
    FTutorialUnlockStruct();
};

