#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore BlendProfilePayload
#include "BlendProfilePayload.h"
#include "BlendProfileBySpeedStateStruct.h"
#include "BlendProfileBySpeedStatePayload.generated.h"

UCLASS(Abstract)
class SIFU_API UBlendProfileBySpeedStatePayload : public UBlendProfilePayload {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlendProfileBySpeedStateStruct m_BlendProfiles;
    
    UBlendProfileBySpeedStatePayload();
};

