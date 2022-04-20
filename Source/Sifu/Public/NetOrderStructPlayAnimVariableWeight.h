#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
//CROSS-MODULE INCLUDE: SCCore ELookAtApplyMode
#include "ELookAtApplyMode.h"
#include "NetOrderStructPlayAnimVariableWeight.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructPlayAnimVariableWeight : public FNetOrderStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimContainer m_AnimContainerToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSCUserDefinedEnumHandler m_VariableWeightLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELookAtApplyMode m_eLookAtApplyMode;
    
    SIFU_API FNetOrderStructPlayAnimVariableWeight();
};

