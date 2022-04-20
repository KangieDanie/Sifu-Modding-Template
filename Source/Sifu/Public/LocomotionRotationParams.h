#pragma once
#include "CoreMinimal.h"
#include "ELocomotionRotationType.h"
#include "LocomotionRotationParams.generated.h"

USTRUCT(BlueprintType)
struct FLocomotionRotationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ELocomotionRotationType m_eRotationType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fSnapDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fLerpFactor;
    
    SIFU_API FLocomotionRotationParams();
};

