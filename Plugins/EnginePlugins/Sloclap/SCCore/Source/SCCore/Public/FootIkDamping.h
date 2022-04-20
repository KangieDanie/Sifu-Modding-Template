#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "FootIkDamping.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FFootIkDamping {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool m_bUseLerp;
    
    UPROPERTY(EditAnywhere)
    float m_fDefaultValue;
    
    UPROPERTY(EditAnywhere)
    float m_fPlantedFootValue;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve m_curveByRelFootPos;
    
public:
    FFootIkDamping(){};
};

