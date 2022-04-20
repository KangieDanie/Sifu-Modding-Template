#pragma once
#include "CoreMinimal.h"
#include "RetrieveLostItemStruct.generated.h"

class UBaseItemData;

USTRUCT(BlueprintType)
struct FRetrieveLostItemStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UBaseItemData* m_ItemOwned;
    
    UPROPERTY(EditAnywhere)
    UBaseItemData* m_ItemToGetIfOwned;
    
    UPROPERTY(EditAnywhere)
    bool m_bCheckReciprocity;
    
    SIFU_API FRetrieveLostItemStruct();
};

