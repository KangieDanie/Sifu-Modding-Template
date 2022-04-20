#pragma once
#include "CoreMinimal.h"
#include "AttackPropertyLevel.generated.h"

USTRUCT(BlueprintType)
struct FAttackPropertyLevel {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 m_Level[3];
    
    UPROPERTY(EditAnywhere)
    bool m_bUseCustomDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fCustomDuration;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseHitAnimDuration;
    
    UPROPERTY(EditAnywhere)
    bool m_bKeepCurrentStateDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fKeepCurrentStateThresold;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseCustomDistance;
    
    UPROPERTY(EditAnywhere)
    float m_fCustomDistance;
    
    SIFU_API FAttackPropertyLevel();
};

