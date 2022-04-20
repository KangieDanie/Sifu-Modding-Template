#pragma once
#include "CoreMinimal.h"
#include "OrderTransformData.generated.h"

USTRUCT(BlueprintType)
struct FOrderTransformData {
    GENERATED_BODY()
public:
    UPROPERTY()
    float m_fPosX;
    
    UPROPERTY()
    float m_fPosY;
    
    UPROPERTY()
    float m_fOrientation;
    
    UPROPERTY()
    float m_fOrderRatio;
    
    SIFU_API FOrderTransformData();
};

