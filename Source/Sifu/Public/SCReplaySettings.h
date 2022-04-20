#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: DeveloperSettings DeveloperSettings
#include "ReplayKeyDataCameraSettings.h"
#include "SCReplaySettings.generated.h"

class ABaseReplayController;

UCLASS(BlueprintType, DefaultConfig, Config=Replay)
class SIFU_API USCReplaySettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<ABaseReplayController> m_PhotoModeGameplayControllerClass;
    
    UPROPERTY(Config, EditAnywhere)
    FString m_ScreenShotFileName;
    
    UPROPERTY(Config, EditAnywhere)
    FString m_ScreenShotDateFormat;
    
protected:
    UPROPERTY(Config, EditAnywhere)
    FReplayKeyDataCameraSettings m_DefaultCameraSettings;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bReplayEditorBuildEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bPhotomodeBuildEnabled;
    
public:
    UFUNCTION(BlueprintPure)
    static bool BPF_IsReplayEditorEnabled();
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsPhotomodeEnabled();
    
    UFUNCTION(BlueprintPure)
    static FReplayKeyDataCameraSettings BPF_GetDefaultCameraSettings();
    
    USCReplaySettings();
};

