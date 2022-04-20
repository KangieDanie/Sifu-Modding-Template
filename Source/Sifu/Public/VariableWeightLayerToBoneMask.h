#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
#include "VariableWeightLayerToBoneMask.generated.h"

class UBlendProfile;

USTRUCT(BlueprintType)
struct SIFU_API FVariableWeightLayerToBoneMask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSCUserDefinedEnumHandler m_LayerEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendProfile* m_BoneMask;
    
    FVariableWeightLayerToBoneMask();
};

