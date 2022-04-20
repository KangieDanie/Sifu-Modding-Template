#pragma once
#include "CoreMinimal.h"
#include "VectorInputData.h"
#include "CursorInputData.generated.h"

UCLASS()
class SIFU_API UCursorInputData : public UVectorInputData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bNormalize;
    
    UPROPERTY(EditAnywhere)
    float m_fNormalizeRegionRadius;
    
    UCursorInputData();
};

