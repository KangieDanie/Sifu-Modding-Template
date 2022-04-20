#pragma once
#include "CoreMinimal.h"
#include "TraversalTypeSettings.generated.h"

USTRUCT(BlueprintType)
struct FTraversalTypeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fEntryAngleAllowance;
    
    UPROPERTY(EditAnywhere)
    float m_fExitAngleClampValue;
    
    UPROPERTY(EditAnywhere)
    float m_fMinTraversalDist;
    
    SIFU_API FTraversalTypeSettings();
};

