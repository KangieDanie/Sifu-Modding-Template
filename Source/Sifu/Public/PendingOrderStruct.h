#pragma once
#include "CoreMinimal.h"
#include "EOrderType.h"
#include "PendingOrderStruct.generated.h"

class UOrderComponent;

USTRUCT()
struct FPendingOrderStruct {
    GENERATED_BODY()
public:
    UPROPERTY()
    EOrderType OrderType;
    
    UPROPERTY(Export)
    UOrderComponent* OrderComponent;
    
    SIFU_API FPendingOrderStruct();
};

