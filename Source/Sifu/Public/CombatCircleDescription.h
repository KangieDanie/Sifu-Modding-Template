#pragma once
#include "CoreMinimal.h"
#include "CombatCircleDescription.generated.h"

USTRUCT(BlueprintType)
struct FCombatCircleDescription {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float m_fOffsetFromPreviousCircle;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fOffsetRotation;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fSafePositionOffset;
    
    UPROPERTY(Config, EditAnywhere)
    int32 m_NbPositionsToGenerate;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fPositionGenerationThreshold;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bAllowSnapAfterRaycast;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fSnapSafeDistance;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fNavPickingTolerance;
    
    SIFU_API FCombatCircleDescription();
};

