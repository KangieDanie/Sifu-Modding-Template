#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "AvailabilityLayerCaches.h"
#include "ReplayScreenshotUserWidget.generated.h"

class ABaseReplayController;

UCLASS(EditInlineNew)
class SIFU_API UReplayScreenshotUserWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    bool m_bTakeScreenshotOnCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAvailabilityLayerCaches m_AvailabilityLayers;
    
    UFUNCTION(BlueprintCallable)
    void BPF_RequestScreenshot(int32 _iResolutionX, int32 _iResolutionY);
    
    UFUNCTION(BlueprintPure)
    ABaseReplayController* BPF_GetReplayController() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_OnScreenshotRequestProcessed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnScreenshotRequested();
    
public:
    UReplayScreenshotUserWidget();
};

