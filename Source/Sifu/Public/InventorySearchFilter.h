#pragma once
#include "CoreMinimal.h"
#include "EEquipmentSlot.h"
#include "InventorySearchFilter.generated.h"

USTRUCT(BlueprintType)
struct FInventorySearchFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EEquipmentSlot m_eSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bOutfitsOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bOnlyNewItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bIgnoreMentoringItems;
    
    SIFU_API FInventorySearchFilter();
};

