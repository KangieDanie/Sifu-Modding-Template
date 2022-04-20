#pragma once
#include "CoreMinimal.h"
#include "CreditCategoryStruct.h"
#include "CreditCompanyStruct.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FCreditCompanyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_CompanyName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FCreditCategoryStruct> m_Categories;
    
    FCreditCompanyStruct();
};

