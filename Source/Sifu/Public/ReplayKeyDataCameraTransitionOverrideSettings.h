#pragma once
#include "CoreMinimal.h"
#include "ReplayKeyDataCameraTarget.h"
#include "ReplayKeyDataCameraTransitionOverrideSettings.generated.h"

USTRUCT(BlueprintType)
struct FReplayKeyDataCameraTransitionOverrideSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FReplayKeyDataCameraTarget m_FollowSettings;
    
    UPROPERTY(BlueprintReadWrite)
    FReplayKeyDataCameraTarget m_LookAtSettings;
    
    SIFU_API FReplayKeyDataCameraTransitionOverrideSettings();
};

