#pragma once
#include "CoreMinimal.h"
#include "AppliedHitImpact.h"
#include "AppliedDeflectImpact.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct SIFU_API FAppliedDeflectImpact : public FAppliedHitImpact {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UCurveFloat* m_KnockBackDynamic;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fSelfStructureDamage;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fSelfSuperDizzyDamage;
    
    FAppliedDeflectImpact();
};

