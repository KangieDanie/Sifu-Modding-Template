#pragma once
#include "CoreMinimal.h"
#include "WorldSave.h"
#include "SCStreamingLevelStateSavable.h"
#include "SCGameData.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCGameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TMap<FName, FWorldSave> m_WorldStatesSaved;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TMap<FName, FSCStreamingLevelStateSavable> m_StreamingLevelsState;
    
    FSCGameData(){};
};

