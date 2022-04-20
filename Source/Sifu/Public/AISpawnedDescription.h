#pragma once
#include "CoreMinimal.h"
#include "AISpawnedDescription.generated.h"

USTRUCT()
struct FAISpawnedDescription {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 m_uiSpawnerGroupIndex;
    
    UPROPERTY()
    int32 m_iSpawnerIndexInLayer;
    
    UPROPERTY()
    bool m_bKilled;
    
    SIFU_API FAISpawnedDescription();
};

