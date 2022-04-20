#pragma once
#include "CoreMinimal.h"
#include "AppliedHitImpact.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAppliedHitImpact {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float m_fDamage;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fStructureDamage;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fSuperDizzyDamage;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 m_iNbFrameStuned;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bUseKnockBackDistance;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fKnockBackDistance;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_iFreezeFrames;
    
    FAppliedHitImpact();
};

