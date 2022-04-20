#pragma once
#include "CoreMinimal.h"
#include "PropertyReactionMovement.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FPropertyReactionMovement {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_StateMoveDynamic;
    
    UPROPERTY(EditAnywhere)
    float m_fStateDistance;
    
    UPROPERTY(EditAnywhere)
    float m_fDuration;
    
    SIFU_API FPropertyReactionMovement();
};

