#pragma once
#include "CoreMinimal.h"
#include "EOrderType.h"
#include "OrderType.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FOrderType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EOrderType m_eOrderType;
    
    UPROPERTY(BlueprintReadOnly)
    FName m_BPOrderID;
    
    friend uint32 GetTypeHash(const FOrderType& Other) {
        return GetTypeHash(Other.m_eOrderType);
    }

    FOrderType();
};

