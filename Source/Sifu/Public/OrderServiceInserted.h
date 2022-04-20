#pragma once
#include "CoreMinimal.h"
#include "OrderServiceInfos.h"
#include "OrderServiceInserted.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FOrderServiceInserted {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_iInsertionIndex;
    
    UPROPERTY(EditAnywhere)
    FOrderServiceInfos m_OrderService;
    
    FOrderServiceInserted();
};

