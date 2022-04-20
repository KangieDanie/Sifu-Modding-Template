#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructPlayAnimVariableWeight.h"
#include "BlendProfileBySpeedStateStruct.h"
#include "EFidgetMirroringTypes.h"
#include "NetOrderStructFidget.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructFidget : public FNetOrderStructPlayAnimVariableWeight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlendProfileBySpeedStateStruct m_BlendProfiles;
    
    UPROPERTY(EditAnywhere)
    EFidgetMirroringTypes m_eMirrorHandling;
    
    SIFU_API FNetOrderStructFidget();
};

