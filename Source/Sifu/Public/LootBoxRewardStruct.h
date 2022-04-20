#pragma once
#include "CoreMinimal.h"
#include "LootBoxTypeCountStruct.h"
#include "LootBoxRewardStruct.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FLootBoxRewardStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FLootBoxTypeCountStruct> m_LootBoxes;
    
    FLootBoxRewardStruct();
};

