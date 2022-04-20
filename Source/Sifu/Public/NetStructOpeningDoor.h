#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructPlayAnimVariableWeight.h"
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "NetStructOpeningDoor.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FNetStructOpeningDoor : public FNetOrderStructPlayAnimVariableWeight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimationAsset* m_OpeningDoorAnimAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimationAsset* m_ClosingDoorAnimAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bInteraction1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimContainer m_AnimContainerToPlayWhenCarryingWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSCUserDefinedEnumHandler m_VariableWeightLayerWhenCarryingWeapon;
    
    SIFU_API FNetStructOpeningDoor();
};

