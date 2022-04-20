#pragma once
#include "CoreMinimal.h"
#include "CameraTransitionInfoPairStruct.generated.h"

class UAbstractCameraData;
class UCameraTransitionInfo;

USTRUCT(BlueprintType)
struct SIFU_API FCameraTransitionInfoPairStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAbstractCameraData* m_CameraData;
    
    UPROPERTY(EditAnywhere)
    UCameraTransitionInfo* m_CameraTransitionInfo;
    
    FCameraTransitionInfoPairStruct();
};

