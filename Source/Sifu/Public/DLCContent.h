#pragma once
#include "CoreMinimal.h"
#include "InventoryItem.h"
#include "DLCContent.generated.h"

USTRUCT()
struct FDLCContent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> m_entitlements;
    
    UPROPERTY(EditAnywhere)
    TArray<FInventoryItem> m_Gears;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_Emotes;
    
    SIFU_API FDLCContent();
};

