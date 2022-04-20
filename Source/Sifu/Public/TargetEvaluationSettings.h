#pragma once
#include "CoreMinimal.h"
#include "TargetEvaluationDBInstance.h"
#include "TargetEvaluationSettings.generated.h"

USTRUCT(BlueprintType)
struct FTargetEvaluationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FTargetEvaluationDBInstance m_TargetEvaluationInstance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fRange;
    
    UPROPERTY(EditAnywhere)
    bool m_bMute;
    
    SIFU_API FTargetEvaluationSettings();
};

