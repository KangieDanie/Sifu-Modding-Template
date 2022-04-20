#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
#include "SCRangeFloatCurve.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FSCRangeFloatCurve {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatRange m_Range;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_CurveMax;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_CurveMin;
    
    SIFU_API FSCRangeFloatCurve();
};

