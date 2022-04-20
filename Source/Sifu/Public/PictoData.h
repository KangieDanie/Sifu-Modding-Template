#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "PictoData.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FPictoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor m_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fGlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fIntensity;
    
    FPictoData();
};

