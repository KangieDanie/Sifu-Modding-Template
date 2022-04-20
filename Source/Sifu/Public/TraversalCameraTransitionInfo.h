#pragma once
#include "CoreMinimal.h"
#include "CameraTransitionInfo.h"
#include "TraversalCameraTransitionInfo.generated.h"

UCLASS()
class SIFU_API UTraversalCameraTransitionInfo : public UCameraTransitionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bApplyCurveToDynamicRatio;
    
    UTraversalCameraTransitionInfo();
};

