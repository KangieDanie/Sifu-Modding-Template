#pragma once
#include "CoreMinimal.h"
#include "LookAtModifierParams.generated.h"

USTRUCT(BlueprintType)
struct FLookAtModifierParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bOverrideSpringSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fOverridenSpringSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fRotationMultiplier;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxClampedYaw;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxClampedPitch;
    
    SIFU_API FLookAtModifierParams();
};

