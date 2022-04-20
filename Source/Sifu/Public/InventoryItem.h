#pragma once
#include "CoreMinimal.h"
#include "EquipmentStruct.h"
#include "InventoryItem.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FEquipmentStruct m_Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 m_iItemCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    bool m_bIsEquipped;
    
    UPROPERTY(EditDefaultsOnly, SaveGame)
    int8 m_iEquippedItemSlot;
    
    UPROPERTY(SaveGame)
    float m_fDurability;
    
    UPROPERTY(SaveGame)
    bool m_bBroken;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    bool m_bIsNew;
    
    FInventoryItem();
};

