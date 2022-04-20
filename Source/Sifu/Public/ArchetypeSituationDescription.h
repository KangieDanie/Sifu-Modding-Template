#pragma once
#include "CoreMinimal.h"
#include "ArchetypeSituationDescription.generated.h"

class UArchetypeAsset;

USTRUCT(BlueprintType)
struct FArchetypeSituationDescription {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UArchetypeAsset* m_Archetype;
    
    UPROPERTY(EditAnywhere)
    int32 m_iLevelMin;
    
    UPROPERTY(EditAnywhere)
    int32 m_iLevelMax;
    
    UPROPERTY(EditAnywhere)
    uint8 m_uiWeightLevel;
    
    UPROPERTY(EditAnywhere)
    uint32 m_uiAppearanceProbabilities;
    
    SIFU_API FArchetypeSituationDescription();
};

