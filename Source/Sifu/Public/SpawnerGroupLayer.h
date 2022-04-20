#pragma once
#include "CoreMinimal.h"
#include "SpawnerGroupLayer.generated.h"

class AAISpawner;

USTRUCT(BlueprintType)
struct FSpawnerGroupLayer {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    int32 m_iLevelMin;
    
    UPROPERTY(EditInstanceOnly)
    int32 m_iLevelMax;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bFixedSituation;
    
    UPROPERTY(EditInstanceOnly)
    TArray<AAISpawner*> m_Spawners;
    
    SIFU_API FSpawnerGroupLayer();
};

