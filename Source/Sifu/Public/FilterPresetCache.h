#pragma once
#include "CoreMinimal.h"
#include "FilterPresetData.h"
#include "FilterPresetCache.generated.h"

USTRUCT(BlueprintType)
struct FFilterPresetCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FFilterPresetData> m_Filters;
    
    SIFU_API FFilterPresetCache();
};

