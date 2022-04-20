#pragma once
#include "CoreMinimal.h"
#include "LootBoxStaticData.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FLootBoxStaticData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_Name;
    
    FLootBoxStaticData();
};

