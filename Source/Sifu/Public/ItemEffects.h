#pragma once
#include "CoreMinimal.h"
#include "EEffectTarget.h"
#include "ItemEffects.generated.h"

class UEffectData;

USTRUCT(BlueprintType)
struct FItemEffects {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EEffectTarget m_eEffectTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UEffectData* m_EffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_iAOEWantedRelations;
    
    SIFU_API FItemEffects();
};

