#pragma once
#include "CoreMinimal.h"
#include "HitAnimsPerDataTable.h"
#include "HitAnimsPerDataTableContainer.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct SIFU_API FHitAnimsPerDataTableContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<UDataTable*, FHitAnimsPerDataTable> m_Data;
    
    FHitAnimsPerDataTableContainer();
};

