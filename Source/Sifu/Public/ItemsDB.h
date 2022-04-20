#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "ItemsDB.generated.h"

class UBaseItemData;

UCLASS(BlueprintType)
class SIFU_API UItemsDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UBaseItemData*> m_Items;
    
    UItemsDB();
};

