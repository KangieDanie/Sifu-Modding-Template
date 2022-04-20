#pragma once
#include "CoreMinimal.h"
#include "VariableWeightLayerToBoneMask.h"
#include "VariableWeightInfo.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FVariableWeightInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVariableWeightLayerToBoneMask> m_layers;
    
    UPROPERTY(Transient)
    TArray<FVariableWeightLayerToBoneMask> m_pendingDelete;
    
    FVariableWeightInfo();
};

