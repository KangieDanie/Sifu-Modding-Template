#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "AngleFeedbackUserWidget.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UAngleFeedbackUserWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_DisplayAngleFeedback(float _fAngle);
    
public:
    UAngleFeedbackUserWidget();
};

