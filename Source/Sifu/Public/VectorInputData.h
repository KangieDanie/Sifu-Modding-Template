#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine RuntimeFloatCurve
#include "GenericInputData.h"
#include "VectorInputData.generated.h"

class UCurveFloat;
class UTrumpetSkewData;

UCLASS()
class SIFU_API UVectorInputData : public UGenericInputData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve m_ResetInputScaleOverTime;
    
    UPROPERTY(EditAnywhere)
    FName m_unrealActionX;
    
    UPROPERTY(EditAnywhere)
    FName m_unrealActionY;
    
    UPROPERTY(EditAnywhere)
    float m_fInnerBound;
    
    UPROPERTY(EditAnywhere)
    float m_fOuterBound;
    
    UPROPERTY(EditAnywhere)
    bool m_bBoundPerAxis;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_Curve;
    
    UPROPERTY(EditAnywhere)
    UTrumpetSkewData* m_trumpetSkewData;
    
    UPROPERTY(EditAnywhere)
    bool m_bInvertXAxis;
    
    UPROPERTY(EditAnywhere)
    bool m_bInvertYAxis;
    
    UPROPERTY(EditAnywhere)
    bool m_bInvertAxises;
    
    UPROPERTY(EditAnywhere)
    bool m_bDebugIsXAxisVertical;
    
    UPROPERTY(EditAnywhere)
    bool m_bNoInputTreatment;
    
    UVectorInputData();
};

