#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "SpecialAbilityDelayedLayer.h"
#include "SpecialAbilityPropertyDB.generated.h"

class UAvailabilityLayerData;

UCLASS(BlueprintType)
class SIFU_API USpecialAbilityPropertyDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fSuccessGuardGaugeRefill;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAvailabilityLayerData* m_PushLayerOnSuccess;
    
    UPROPERTY(EditAnywhere)
    TArray<FSpecialAbilityDelayedLayer> m_DelayedLayersOnSuccess;
    
    USpecialAbilityPropertyDB();
};

