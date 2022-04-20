#pragma once
#include "CoreMinimal.h"
#include "ECameraTrackingMode.h"
#include "CameraDataModifier.h"
#include "CDM_SwitchCameraTrackingMode.generated.h"

UCLASS(Abstract)
class SIFU_API UCDM_SwitchCameraTrackingMode : public UCameraDataModifier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ECameraTrackingMode m_eCameraTrackingModeTranslationIn;
    
public:
    UCDM_SwitchCameraTrackingMode();
};

