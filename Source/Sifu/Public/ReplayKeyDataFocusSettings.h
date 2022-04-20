#pragma once
#include "CoreMinimal.h"
#include "EReplayKeyCameraFocus.h"
#include "ReplayKeyDataWorldTarget.h"
#include "ReplayKeyDataFocusSettings.generated.h"

USTRUCT(BlueprintType)
struct FReplayKeyDataFocusSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    EReplayKeyCameraFocus m_eFocusMode;
    
    UPROPERTY(BlueprintReadWrite)
    float m_fAperture;
    
    UPROPERTY(BlueprintReadWrite)
    float m_fFocusDistance;
    
    UPROPERTY(BlueprintReadWrite)
    FReplayKeyDataWorldTarget m_Target;
    
    SIFU_API FReplayKeyDataFocusSettings();
};

