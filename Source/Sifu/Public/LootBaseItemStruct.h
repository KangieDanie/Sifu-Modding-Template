#pragma once
#include "CoreMinimal.h"
#include "LootBaseItemStruct.generated.h"

class UBaseItemData;

USTRUCT(BlueprintType)
struct SIFU_API FLootBaseItemStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBaseItemData* m_Item;
    
    UPROPERTY(EditAnywhere)
    uint16 m_uiItemNumber;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_uiMaterialIndex;
    
    FLootBaseItemStruct();
};

