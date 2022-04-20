#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore ESCBlendType
#include "ESCBlendType.h"
#include "ParriedProfile.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FParriedProfile {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fParriedDuration;
    
    UPROPERTY(EditAnywhere)
    ESCBlendType m_eParriedReorientationBlendType;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_ParriedReorientationCurve;
    
    SIFU_API FParriedProfile();
};

