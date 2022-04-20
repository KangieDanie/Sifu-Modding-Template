#pragma once
#include "CoreMinimal.h"
#include "OrderServiceInfos.h"
#include "OrderInfosInstance.generated.h"

class UOrderDB;

USTRUCT(BlueprintType)
struct SIFU_API FOrderInfosInstance {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FOrderServiceInfos> m_Services;
    
    UPROPERTY()
    UOrderDB* m_DB;
    
    FOrderInfosInstance();
};

