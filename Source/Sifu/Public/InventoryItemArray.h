#pragma once
#include "CoreMinimal.h"
#include "InventoryItem.h"
#include "InventoryItemArray.generated.h"

USTRUCT()
struct FInventoryItemArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FInventoryItem> m_ItemList;
    
    SIFU_API FInventoryItemArray();
};

