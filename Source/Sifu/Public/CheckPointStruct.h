#pragma once
#include "CoreMinimal.h"
#include "CheckPointStruct.generated.h"

USTRUCT(BlueprintType)
struct FCheckPointStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FName m_SpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TArray<FName> m_LevelToStreams;
    
    SIFU_API FCheckPointStruct();
};

