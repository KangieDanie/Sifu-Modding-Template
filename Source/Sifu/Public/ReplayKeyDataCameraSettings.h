#pragma once
#include "CoreMinimal.h"
#include "ReplayKeyDataFocusSettings.h"
#include "ReplayKeyDataLensSettings.h"
#include "ReplayKeyDataCameraSettings.generated.h"

USTRUCT(BlueprintType)
struct FReplayKeyDataCameraSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FReplayKeyDataFocusSettings m_FocusSettings;
    
    UPROPERTY(BlueprintReadWrite)
    FReplayKeyDataLensSettings m_LensSettings;
    
    SIFU_API FReplayKeyDataCameraSettings();
};

