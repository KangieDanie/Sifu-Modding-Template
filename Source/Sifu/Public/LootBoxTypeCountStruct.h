#pragma once
#include "CoreMinimal.h"
#include "ELootBoxType.h"
#include "LootBoxTypeCountStruct.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FLootBoxTypeCountStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELootBoxType m_Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_iCount;
    
    FLootBoxTypeCountStruct();
};

