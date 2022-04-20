#pragma once
#include "CoreMinimal.h"
#include "HitImpact.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FHitImpact {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUseDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUseStructureDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fStructureDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUseSuperDizzyDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fSuperDizzyDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUseNbFrameStuned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_iNbFrameStuned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUseKnockBackDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fKnockBackDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUseFreezeFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_iFreezeFrames;
    
public:
    FHitImpact();
};

