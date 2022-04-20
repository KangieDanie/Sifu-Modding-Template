#pragma once
#include "CoreMinimal.h"
#include "HitAnimsPerHitbox.h"
#include "HitAnimsPerDataTable.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FHitAnimsPerDataTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TMap<FName, FHitAnimsPerHitbox> m_HitAnimsPerHitboxMap;
    
    FHitAnimsPerDataTable();
};

