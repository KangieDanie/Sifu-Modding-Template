#pragma once
#include "CoreMinimal.h"
#include "AIDebugSpawnerInstance.generated.h"

class UArchetypeAsset;
class AAISpawner;

USTRUCT(BlueprintType)
struct FAIDebugSpawnerInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AAISpawner* m_Spawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UArchetypeAsset* m_Archetype;
    
    SIFU_API FAIDebugSpawnerInstance();
};

