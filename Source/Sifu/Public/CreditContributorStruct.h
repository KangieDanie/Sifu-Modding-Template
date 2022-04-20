#pragma once
#include "CoreMinimal.h"
#include "CreditContributorStruct.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FCreditContributorStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_FirstName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_LastName;
    
    FCreditContributorStruct();
};

