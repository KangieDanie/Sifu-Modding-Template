#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CinematicCamera CineCameraComponent
#include "CineCameraComponent.h"
#include "ReplayKeyDataCameraSettings.h"
#include "ReplayCineCameraComponent.generated.h"

class UCurveFloat;

UCLASS(Config=Replay)
class SIFU_API UReplayCineCameraComponent : public UCineCameraComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fZoomSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_ZoomSpeedCurve;
    
    UFUNCTION(BlueprintPure)
    FReplayKeyDataCameraSettings BPF_GetCameraSettings() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ApplyCameraSettings(FReplayKeyDataCameraSettings _settings);
    
    UReplayCineCameraComponent();
};

