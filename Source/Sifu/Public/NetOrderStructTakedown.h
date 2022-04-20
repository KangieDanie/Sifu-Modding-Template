#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructAttackEnv.h"
//CROSS-MODULE INCLUDE: Engine HitResult
#include "ImpactResult.h"
#include "HitRequest.h"
#include "NetOrderStructTakedown.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructTakedown : public FNetOrderStructAttackEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool m_bFromParry;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bEnvironementalTakedown;
    
    UPROPERTY(BlueprintReadOnly)
    FHitResult m_ParryHit;
    
    UPROPERTY(BlueprintReadOnly)
    FImpactResult m_ParryImpact;
    
    UPROPERTY(BlueprintReadOnly)
    FHitRequest m_ParryHitRequest;
    
    UPROPERTY(BlueprintReadOnly)
    FHitResult m_ImpactOnEnv;
    
    SIFU_API FNetOrderStructTakedown();
};

