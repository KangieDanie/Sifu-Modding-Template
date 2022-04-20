#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "EEquipmentSlot.h"
#include "BaseItemData.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class SIFU_API UBaseItemData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText m_ItemName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_InventoryIcon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EEquipmentSlot m_EquipmentSlot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bIsAResource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bHasDurability;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bIsUnique;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bCanBeSalvaged;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bCanBeDyed;
    
    UBaseItemData();
};

