#pragma once
#include "CoreMinimal.h"
#include "ELootBoxType.h"
#include "LootBoxInstancedData.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FLootBoxInstancedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 m_iGMLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    ELootBoxType m_Type;
    
    FLootBoxInstancedData();
};

