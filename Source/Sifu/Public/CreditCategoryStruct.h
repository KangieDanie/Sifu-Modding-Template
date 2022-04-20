#pragma once
#include "CoreMinimal.h"
#include "CreditContributorStruct.h"
#include "CreditCategoryStruct.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FCreditCategoryStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_CategoryName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FCreditContributorStruct> m_Contributors;
    
    FCreditCategoryStruct();
};

