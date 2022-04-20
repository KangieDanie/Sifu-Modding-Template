#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "LipSync_Pause.h"
#include "SubtitlesFileSave.generated.h"

UCLASS()
class USubtitlesFileSave : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FName, FLipSync_Pause> Data;
    
    USubtitlesFileSave();
};

