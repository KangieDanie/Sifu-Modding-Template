#pragma once
#include "CoreMinimal.h"
#include "SpawnerPerZone.generated.h"

class AAISpawner;

USTRUCT(BlueprintType)
struct FSpawnerPerZone {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TWeakObjectPtr<AAISpawner> m_Spawner;
    
    SIFU_API FSpawnerPerZone();
};

