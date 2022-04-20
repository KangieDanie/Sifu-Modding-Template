#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "ReplayUIModeUserWidget.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UReplayUIModeUserWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bAddToViewport;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_iZOrder;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bIsActive;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bHandleInputWhenUINotVisible;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bIsOverlay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText m_DisplayName;
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_OnLeaveMode();
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_OnEnterMode();
    
public:
    UReplayUIModeUserWidget();
};

