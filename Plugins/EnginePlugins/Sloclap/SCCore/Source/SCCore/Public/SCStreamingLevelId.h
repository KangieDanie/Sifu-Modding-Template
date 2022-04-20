#pragma once
#include "CoreMinimal.h"
#include "SCStreamingLevelId.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCStreamingLevelId {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FName m_ID;
    
    FSCStreamingLevelId(){};
};

