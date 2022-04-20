#pragma once
#include "CoreMinimal.h"
#include "SuperDizzyReaction.generated.h"

USTRUCT(BlueprintType)
struct FSuperDizzyReaction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fMandatoryDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxAccumulatedDamage;
    
    UPROPERTY(EditAnywhere)
    int32 m_iMaxAccumatedHits;
    
    SIFU_API FSuperDizzyReaction();
};

