#pragma once
#include "CoreMinimal.h"
#include "BlendProfileBySpeedStateStruct.h"
#include "FidgetDBDescription.generated.h"

class UFidgetDB;

USTRUCT(BlueprintType)
struct FFidgetDBDescription {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UFidgetDB* m_FidgetDB;
    
    UPROPERTY(EditAnywhere)
    UFidgetDB* m_OnAlertLevelChangedFidgetDB;
    
    UPROPERTY(EditAnywhere)
    uint32 m_uiAllowedSpeedState;
    
    UPROPERTY(EditAnywhere)
    FBlendProfileBySpeedStateStruct m_BlendProfiles;
    
    SIFU_API FFidgetDBDescription();
};

